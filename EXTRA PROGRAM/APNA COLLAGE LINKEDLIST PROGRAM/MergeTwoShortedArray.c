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

void mergeTwoShortedLinkedList(struct node *first1 , struct node *first2){
    if(first1==NULL || first2==NULL){
        printf("Your one linked list is empty");
    }
    else{
        struct  node *first3= (struct node*)malloc(sizeof(struct node));
        struct node *save1=first1;
        struct node *save2=first2;
        if((first1->info)>(first2->info)){
            first3->info=first2->info;
            save2=first2->link;
        }else if((first1->info)>(first2->info)){
            first3->info=first1->info;
            save1=first1->link;
        }
        struct node *save3=first3;
        while((save1!=NULL) || (save2!=NULL)){
            struct  node *temp= (struct node*)malloc(sizeof(struct node));
            if(save1->info<=save2->info){
                temp->info=save1->info;
                save3->link=temp;
                save3=temp;
                save1=save1->link;
            }
            else{
                temp->info=save2->info;
                save3->link=temp;
                save3=temp;
                save2=save2->link;
            }
        }
        display(first3);
    }
}

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

    mergeTwoShortedLinkedList(first1,first2);
}