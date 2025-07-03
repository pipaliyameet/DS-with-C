#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

void display(struct node *first){
    struct node *save=first;
    while(save!=NULL){
        printf("Element = %d\n",save->info);
        save=save->link;
    }
}
void reverseLinkedList(struct node *first){
    if(first==NULL){
        printf("Your linked list is empty");
    }
    else{
        struct node*current =first;
        struct node *next= current->link;
        struct node *pred;
        first->link=NULL;
        while(next->link!=NULL){
            pred =current;
            current=next;
            next=next->link;
            current->link=pred;
        }
        next->link=current;
        first=next;
        display(first);
    }
}

void main(){
    struct node *first ,*second ,*third ,*fourth;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    first->info=1;
    first->link=second;

    second->info=2;
    second->link=third;

    third->info=3;
    third->link=fourth;

    fourth->info=4;
    fourth->link=NULL;

    reverseLinkedList(first);
}