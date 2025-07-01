#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};
struct node *first;

void shorALinkedList(){
    if(first==NULL){
        printf("Your linkes list is not avilable");
        return;
    }
    else{
        struct node *save=first;
        struct node *temp;

        while(save!=NULL){
            temp=save;
            while(temp->link!=NULL){
                if(save->link==temp->link->info){
                    struct node *temp2=save;
                    save->info=temp;
                    temp->info=temp2;
                    free(temp2);
                }
                temp=temp->link;
            }
            save=save->link;

            
        }
    }
}