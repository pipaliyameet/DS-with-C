#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node * insertAtlast(struct node  *l,struct node *r){
    struct node *newNode =(struct node*)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newNode->info);
    if(l==NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        l=newNode;
        return l;
    }else{
        r->rptr=newNode;
        newNode->lptr=r;
        newNode->rptr=NULL;
        r=newNode;
        return r;    
    }
}

struct node * insertAtfirst(struct node *l){
    struct node *newNode =(struct node*)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newNode->info);
    if(l==NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        l=newNode;
    }else{
        l->lptr=newNode;
        newNode->rptr=l;
        newNode->lptr=NULL;
        l=newNode;
    }
    return l;
}

void display(struct node *l){
    struct node *save=l;
    while(save!=NULL){
        printf("Element = %d",save->info);
        save=save->rptr;
    }
}

void main(){
    struct node *l=NULL;
    struct node *r=NULL;
}