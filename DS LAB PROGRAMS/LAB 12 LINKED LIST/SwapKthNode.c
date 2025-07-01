#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node*link;
};
struct node *first;

void swapNode(int n){
    if(first==NULL){
        printf("Your linked list is not avilable");
        return;
    }
    else{
        struct node *save=first;
        int count=0;
        while(save->link!=NULL){
            count++;
            save=save->link;
        }count+=1;

        int num = (count-n);
        count=0;
        save=first;
        struct node *temp;
        struct node *temp2;
        while(save->link!=NULL){
            if(count==n){
                temp=save;
            }
            else if(count=num){
                temp2 =save;
                save->info= temp;
                temp->info= temp2;
            }
            count++;
        }
    }
}