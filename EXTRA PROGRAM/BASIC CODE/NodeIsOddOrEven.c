#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node * oddOrNumber(struct node *first ,struct node *odd ,struct node *even){
    struct node *save=first;
    struct node *temp=first;
    struct node *pred1=odd;
    struct node *pred2=odd;

    while(save!=NULL){
        if((save->info % 2)!=0){
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            newNode->info=save->info;
            if(pred1!=NULL){
                pred1->link=newNode;
            }
            printf("Odd num = %d\n",newNode->info);
            pred1=newNode;
        }
        save=save->link;
    }

    while(temp!=NULL){
        if((temp->info % 2)==0){
            struct node *newNode = (struct node*)malloc(sizeof(struct node));
            newNode->info=temp->info;
            if(pred2!=NULL){
                pred2->link=newNode;
            }
            printf("even num = %d\n",newNode->info);
            pred2=newNode;
        }
        temp=temp->link;
    }
}

struct node * insertAtLast(struct node *first){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    int x;
    printf("E : ");
    scanf("%d",&x);
    newNode->info=x;
    newNode->link=first;
    first=newNode ;
    return first;
}

void main(){
    int n ,count=0;
    printf("E.n of node = ");
    scanf("%d",&n);

    struct node *first=NULL;
    struct node *odd=NULL;
    struct node *even=NULL;


    for(count=0 ;count<n ;count++){
        first = insertAtLast(first);
    }

    // struct node *first ,*second ,*third ,*fourth ,*fifth;
    // first = (struct node*)malloc(sizeof(struct node));
    // second = (struct node*)malloc(sizeof(struct node));
    // third = (struct node*)malloc(sizeof(struct node));
    // fourth = (struct node*)malloc(sizeof(struct node));
    // fifth = (struct node*)malloc(sizeof(struct node));

    // first->info=1;
    // first->link=second;

    // second->info=2;
    // second->link=third;

    // third->info=3;
    // third->link=fourth;

    // fourth->info=4;
    // fourth->link=fifth;

    // fifth->info=5;
    // fifth->link=NULL;
    
    oddOrNumber(first ,odd ,even);
}