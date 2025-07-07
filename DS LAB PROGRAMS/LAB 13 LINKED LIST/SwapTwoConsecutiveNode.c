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

void swapTwoConsecutiveNode(struct node *first){
    if(first==NULL){
        printf("Your linked list is empty");
    }
    else if(first->link==NULL){
        printf("Your linked list have only one node");
    }
    
        struct node *save=first;
        struct node *temp=first->link;
        struct node *pred;
        first=first->link;
        int c=0;
        while(temp->link!=NULL){
            save->link=temp->link;
            temp->link=save;
            pred=save;
            save=save->link;
            if(save->link==NULL){
                break;
            }
            temp=save->link;
            pred->link=temp;
        }
            save->link=NULL;
            temp->link=save;
            // pred->link=temp;
           display(first);
}

struct node * insertAtLast(struct node *first){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value of node : ");
    scanf("%d",&newNode->info);
    if(first==NULL){
        newNode->link=NULL;
        first =newNode;
        return first;
    }
    else{
        struct node *save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
        newNode->link=NULL;
        return 0;
    }
}

struct node* swapPairs(struct node* head) {
    if(head==NULL || head->link==NULL){
        return head;
    }
    else{
        struct node *save=head;
        struct node *temp=head->link;
        struct node *pred;
        head=head->link;
        while(temp->link != NULL){
            save->link=temp->link;
            temp->link=save;
            pred=save;
            save=save->link;
            if(save->link !=NULL){
                temp=save->link;
                pred->link=temp;
            }
            if(temp->link == NULL){
                save->link=NULL;
                temp->link=save;
            }
            else{
                break;
            }
        }
        display(head);
        return head;
    }
}

void main(){
    struct node *first=NULL;
    int x ,count=0;
    printf("How many node you insert : ");
    scanf("%d",&x);
    first =insertAtLast(first);
    while(count<(x-1)){
        insertAtLast(first);
        count++;
    }
    // void main(){
    // struct node *first1 ,*second1 ,*third1 ,*fourth1;
    // first1 = (struct node*)malloc(sizeof(struct node));
    // second1 = (struct node*)malloc(sizeof(struct node));
    // third1 = (struct node*)malloc(sizeof(struct node));
    // fourth1 = (struct node*)malloc(sizeof(struct node));

    // first1->info=98;
    // first1->link=second1;

    // second1->info=3;
    // second1->link=third1;

    // third1->info=10;
    // third1->link=fourth1;

    // fourth1->info=7;
    // fourth1->link=NULL;
    swapPairs(first);
    printf("heyy");
}