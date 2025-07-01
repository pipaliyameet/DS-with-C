#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first;

void addGCDBetweenNode(){
    if(first==NULL){
        printf("Your linked list is empty");
        return;
    }
    else {
        struct node *save=first;
        struct node *temp;
        while(save!=NULL){
            temp=save->link;
            int n= save->info;
            int m=temp->info;
            int smaller;
            while(n>0 || m>0){
                if((n%m)==0){
                   if(n>m){
                    smaller=m;
                   }else{
                    smaller=n;
                   }
                   struct node *newNode =(struct node*)malloc(sizeof(struct node));
                   newNode->info=smaller;
                   save->link=newNode;
                   newNode->link=temp;
                   break;
                }
                else{
                    int temp2 = (n%m);
                    n=m;
                    m=temp2;
                }
                temp=temp->link;
            }
            save=save->link;
        }
    }
}