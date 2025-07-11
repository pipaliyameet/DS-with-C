#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *lptr;
    struct node *rptr;
};

void RPreOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        printf("value = %d  ,",t->info);
        if(t->lptr!=NULL){
            RPreOrder(t->lptr);
        }if(t->rptr!=NULL){
            RPreOrder(t->rptr);
        }
    }
}

void RInOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        if(t->lptr!=NULL){
            RInOrder(t->lptr);
        }
        printf("value : %d ,",t->info);
        if(t->rptr!=NULL){
            RInOrder(t->rptr);
        }
    }
}

void RPostOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        if(t->lptr!=NULL){
            RPostOrder(t->lptr);
        }
        if(t->rptr!=NULL){
            RPostOrder(t->rptr);
        }
        printf("value : %d ,",t->info);
    }
}
void makeTree(){
    struct node *n1=(struct node*)malloc(sizeof(struct node));
    struct node *n2=(struct node*)malloc(sizeof(struct node));
    struct node *n3=(struct node*)malloc(sizeof(struct node));
    struct node *n4=(struct node*)malloc(sizeof(struct node));
    struct node *n5=(struct node*)malloc(sizeof(struct node));
    struct node *n6=(struct node*)malloc(sizeof(struct node));
    struct node *n7=(struct node*)malloc(sizeof(struct node));
    struct node *n8=(struct node*)malloc(sizeof(struct node));
    struct node *n9=(struct node*)malloc(sizeof(struct node));
    struct node *n10=(struct node*)malloc(sizeof(struct node));

    n1->info=50;
    n1->lptr=NULL;
    n1->rptr=NULL;

    n2->info=25;
    n2->lptr=NULL;
    n2->rptr=NULL;
    n1->lptr=n2;

    n3->info=22;
    n3->lptr=NULL;
    n3->rptr=NULL;
    n2->lptr=n3;

    n4->info=15;
    n4->lptr=NULL;
    n4->rptr=NULL;
    n3->lptr=n4;

    n5->info=40;
    n5->lptr=NULL;
    n5->rptr=NULL;
    n2->rptr=n5;

    n6->info=30;
    n6->lptr=NULL;
    n6->rptr=NULL;
    n5->lptr=n6;

    n7->info=75;
    n7->lptr=NULL;
    n7->rptr=NULL;
    n1->rptr=n7;

    n8->info=60;
    n8->lptr=NULL;
    n8->rptr=NULL;
    n7->lptr=n8;

    n9->info=80;
    n9->lptr=NULL;
    n9->rptr=NULL;
    n7->rptr=n9;

    n10->info=90;
    n10->lptr=NULL;
    n10->rptr=NULL;
    n9->rptr=n10;

    RPreOrder(n1);
    printf("\n");
    RInOrder(n1);
    printf("\n");
    RPostOrder(n1);
}

void main(){
    makeTree();
}