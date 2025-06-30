#include <stdio.h>
#include <stdlib.h>

struct node1{
    int info;
    struct node1 *link;
};
struct node2{
    int filed;
    struct node2 *ptr;
};
struct node2 *begin;
int copyLinkedList(struct node1 *first){
    if(first == NULL){
        printf("Your linked list is not avilable");
        return NULL;
    }
    else{
        struct node2 *newNode = (struct node2*)malloc(sizeof(struct node2));
        newNode->filed=first->info;
        begin=newNode;

        struct node1 *save=first;
        struct node2 *pred;
        while(save->link!=NULL){
            pred =newNode;
            save=save->link;
            struct node2 *newNode = (struct node2*)malloc(sizeof(struct node2));
            newNode->filed = save->info;
            newNode->ptr=pred;
        }
        newNode->ptr=NULL;
        return (begin);
    }
}

void main(){
    /*code*/
}