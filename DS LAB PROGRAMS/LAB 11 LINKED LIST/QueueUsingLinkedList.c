#include<stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first;

void queueInsert(int x){
    struct node *newNode =(struct node*)malloc(sizeof(struct node));
    newNode->info=x;
    if(first==NULL){
        first=newNode;
        return;
    }
    else{
        struct node *save=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
        return;
    }
}

void queueDeletion(){
    if(first==NULL){
        printf("Your linked list is empty");
        return;
    }
    else{
        struct node *save=first;
        first=first->link;
        free(save);
        return;
    }
}