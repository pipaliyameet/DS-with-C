#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

int removeDuplicates(struct node *first){
    if(first==NULL){
        printf("Your linked list is not avilable");
        return 0;
    }
    else{
        struct node *save=first;
        struct node *temp;

        while(save->link!=NULL){
            temp=save->link;
            while(temp!=NULL){
                if(save->info == temp->info){
                    struct node *temp2=temp;
                    save->link=temp->link;
                    free(temp2);
                }
            }
            save= save->link;
        }
    }
}

void main(){

}