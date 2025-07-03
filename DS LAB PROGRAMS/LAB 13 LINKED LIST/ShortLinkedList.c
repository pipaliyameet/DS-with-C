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

void shorALinkedList(struct node *first){
    if(first==NULL){
        printf("Your linkes list is not avilable");
        return;
    }
    else{
        struct node *save=first;
        struct node *temp;

        while(save->link!=NULL){
            temp=save->link;
            while(temp!=NULL){
                if(save->info>temp->info){
                    int temp2 =save->info;
                    save->info=temp->info;
                    temp->info=temp2;
                }
                temp=temp->link;
            }
            save=save->link;
        }
        display(first);
    }
}

void main(){
    struct node *first1 ,*second1 ,*third1 ,*fourth1;
    first1 = (struct node*)malloc(sizeof(struct node));
    second1 = (struct node*)malloc(sizeof(struct node));
    third1 = (struct node*)malloc(sizeof(struct node));
    fourth1 = (struct node*)malloc(sizeof(struct node));

    first1->info=98;
    first1->link=second1;

    second1->info=3;
    second1->link=third1;

    third1->info=10;
    third1->link=fourth1;

    fourth1->info=7;
    fourth1->link=NULL;

    shorALinkedList(first1);
}