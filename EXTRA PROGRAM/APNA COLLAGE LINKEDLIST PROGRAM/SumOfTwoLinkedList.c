#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

void display(struct node *first){
    struct node *save=first;
    printf("Answer = ");
    while(save!=NULL){
        printf("element = %d\n",save->info);
        save=save->link;
    }
}

void sumOfTwoLinkedList(struct node *first1 ,struct node *first2){
    if(first1==NULL|| first2==NULL){
        printf("Your one linked list is empty");
    }
    else{
        struct node *newNode= (struct node*)malloc(sizeof(struct node));
        int vadi=0;
        int ans = (first1->info)+(first2->info)+vadi;
        newNode->info = (ans%10);
        vadi =(ans/10);
        struct node *first3=newNode;
        struct node *next=first3;
        struct node *save=first1->link;
        struct node *temp=first2->link;
        while(save!=NULL || temp!=NULL){
            ans = (save->info)+(temp->info)+vadi;
            struct node *newNode= (struct node*)malloc(sizeof(struct node));
            newNode->info=(ans%10);
            vadi=(ans/10);
            next->link=newNode;
            save=save->link;
            temp=temp->link;
        }
        display(first3);
    }
}

struct node * push(struct node *first){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    newNode->info=x;
    if(first==NULL){
        first=newNode;
        return first;
    }
    else{
        newNode->link=first;
        first=newNode;
        return first;
    }
}

void main(){
    struct node *first1=NULL;
    int n ,count=0;
    printf("Enter a length of your Number digites : ");
    scanf("%d",&n);
    while(count<n){
        first1 = push(first1);
        count++;
    }
    display(first1);

    struct node *first2=NULL;
    int m;
    count=0;
    printf("Enter a length of your Number digites : ");
    scanf("%d",&m);
    while(count<m){
        first2 = push(first2);
        count++;
    }
    sumOfTwoLinkedList(first1,first2);
}