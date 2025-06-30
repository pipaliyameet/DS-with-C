#include <stdio.h>
#include <stdlib.h>
struct Node{
    int info;
    struct Node* link;
};
struct Node2{
    int field;
    struct Node2* ptr;
};

struct Node* first = NULL;
struct Node2* Begin = NULL;

void copyLinkedList(){

    if(first == NULL){
        printf("Linked list is not availeble");
    }
    else{
        struct Node2* newNode = (struct Node2*)malloc(sizeof(struct Node*));
        struct Node2* pred;
        newNode->field=first->info;
        Begin=newNode;
        struct Node* save = first;
        while(save!=NULL){
            pred =newNode;
            save=save->link;
            struct Node2* newNode = (struct Node2*)malloc(sizeof(struct Node2*));
            newNode->field=save->info;
            pred->ptr=newNode;
        }
        pred->ptr=NULL;
    }
}

void main(){}
