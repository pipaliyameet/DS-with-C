#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node * insertAtFirst(struct node *l){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter your element : ");
    scanf("%d",&newNode->info);
    if(l==NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        l=newNode;
    }
    else{
        newNode->rptr=l;
        l->lptr=newNode;
        newNode->lptr=NULL;
        l=newNode;
    }
    return l;
}

void deleteAtOrder(struct node *s){
    if(s==NULL){
        printf("Your linked list is emty");
    }else{
        struct node *t=s;
        if(t->lptr==NULL){
            struct node *t2=t->rptr;
            t2->lptr=NULL;
            t->rptr=NULL;
            free(t);
        }else{
            t->lptr->rptr=t->rptr;
            t->rptr->lptr=t->lptr;
            t->lptr=NULL;
            t->rptr=NULL;
            free(t);
        }
    }
}

struct node * insertAtFirst(struct node *l){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newNode->info);
    if(l==NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        l=newNode;
    }else{
        newNode->rptr=l;
        l->lptr=newNode;
        newNode->rptr=NULL;
        l=newNode;
    } 
    return l;
}

struct node * insertAtLast(struct node *l ,struct node *r){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newNode->info);
    if(l==NULL){
        newNode->lptr=NULL;
        newNode->rptr=NULL;
        l=newNode;
    }else{
        r->rptr=newNode;
        newNode->lptr=r;
        newNode->rptr=NULL;
        r=newNode;
    } 
    return l;
}

void display(struct node *l){
    struct node *save=l;
    while(save!=NULL){
        printf("Element : %d\n",save->info);
        save=save->rptr;
    }
}

void main(){}