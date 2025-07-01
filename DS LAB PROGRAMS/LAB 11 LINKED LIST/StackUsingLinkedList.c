#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first;

void push(int x){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info=x;
    if(first==NULL){
        first=newNode;
        return;
    }
    else{
        newNode->link=first;
        first=newNode;
        return;
    }
}

void pop(){
    if(first==NULL){
        printf("Your linked list is not avilable");
        return;
    }
    else{
        struct node *temp=first;
        first=first->link;
        free(temp);
    }
}