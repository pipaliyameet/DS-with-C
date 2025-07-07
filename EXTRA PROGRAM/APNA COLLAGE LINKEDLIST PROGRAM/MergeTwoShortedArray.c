#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

void display(struct node *first3){
    struct node *save=first3;
    while(save!=NULL){
        printf("Element = %d\n",save->info);
        save=save->link;
    }
}

struct node* mergeTwoLists(struct node *list1, struct node *list2) {
    if(list1==NULL && list2==NULL){
        return list1;
    }
    else if(list1==NULL && list2!=NULL){
        return list2;
    }else if(list2==NULL && list2!=NULL){
        return list1;
    }
    else{
        struct node *save=list1;
        struct node *temp=list2;
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        if((save->info) < (temp->info)){
            newNode->info=save->info;
            save=save->link;
        }else{
            newNode->info=temp->info;
            temp=temp->link;
        }
        struct node *list3=newNode;
        struct node *save3;                                                                             
        while(save!=NULL || temp!=NULL){
            save3=newNode;
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            if((save!=NULL) && (temp!=NULL) && ((save->info) <= (temp->info))){
                newNode->info=save->info;
                save=save->link;
            }
            else if((save!=NULL) && (temp!=NULL) && ((save->info) >=(temp->info))){
                newNode->info=temp->info;
                temp=temp->link;
            }
            else if(save==NULL){
                newNode->info=temp->info;
                temp=temp->link;
            }
            else if(save!=NULL && temp==NULL){
                newNode->info=save->info;
                save=save->link;
            }
            save3->link=newNode;
            }
            newNode->link=NULL;
            display(list3);
            return (list3);
        }
    }

// void mergeTwoShortedLinkedList(struct node *first1 , struct node *first2){
//     if(first1==NULL || first2==NULL){
//         printf("Your one linked list is empty");
//     }
//     else{
//         struct  node *first3= (struct node*)malloc(sizeof(struct node));
//         struct node *save1=first1;
//         struct node *save2=first2;
//         if((first1->info)>(first2->info)){
//             first3->info=first2->info;
//             save2=first2->link;
//         }else if((first1->info)>(first2->info)){
//             first3->info=first1->info;
//             save1=first1->link;
//         }
//         struct node *save3=first3;
//         while((save1->link!=NULL) || (save2->link!=NULL)){
//             struct  node *temp= (struct node*)malloc(sizeof(struct node));
//             if(save1->info<=save2->info){
//                 temp->info=save1->info;
//                 save3->link=temp;
//                 save3=temp;
//                 save1=save1->link;
//             }
//             else{
//                 temp->info=save2->info;
//                 save3->link=temp;
//                 save3=temp;
//                 save2=save2->link;
//             }
//         }
//         display(first3);
//     }
// }

void main(){
    struct node *first1 ,*second1 ,*third1 ,*fourth1;
    first1 = (struct node*)malloc(sizeof(struct node));
    second1 = (struct node*)malloc(sizeof(struct node));
    third1 = (struct node*)malloc(sizeof(struct node));
    fourth1 = (struct node*)malloc(sizeof(struct node));

    first1->info=1;
    first1->link=second1;

    second1->info=3;
    second1->link=third1;

    third1->info=5;
    third1->link=fourth1;

    fourth1->info=7;
    fourth1->link=NULL;

    struct node *first2 ,*second2 ,*third2 ,*fourth2;
    first2 = (struct node*)malloc(sizeof(struct node));
    second2 = (struct node*)malloc(sizeof(struct node));
    third2 = (struct node*)malloc(sizeof(struct node));
    fourth2 = (struct node*)malloc(sizeof(struct node));

    first2->info=2;
    first2->link=second2;

    second2->info=4;
    second2->link=third2;

    third2->info=6;
    third2->link=fourth2;

    fourth2->info=8;
    fourth2->link=NULL;

    // display(first1);
    // mergeTwoShortedLinkedList(first1,first2);
    mergeTwoLists(first1,first2);
}