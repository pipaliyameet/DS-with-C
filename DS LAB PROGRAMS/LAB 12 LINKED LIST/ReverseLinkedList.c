#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

int reverseLinkkedList(struct node *first){
    if(first==NULL){
        printf("Your linked list is not avilable");
        return NULL;
    }
    else if(first->link=NULL){
        printf("Your linked list have only one node");
        return first;
    }
    else{
        struct node *current = first;
        struct node *pred;
        struct node *next = current;
        while(next->link!=NULL){
            pred = current;
            current=next;
            next=next->link;
            current->link=pred;
        }
        next->link=current;
        first=next;
        return first;
    }
}