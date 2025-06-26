#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
};

struct Node* first = NULL;

void deleteDuplicateNode(){
    if(first = NULL){
        printf("Your linked list is empty");
    }
    else{
        struct Node* save =first;

        while(save->link!=NULL){
            int count=0;
            while(save->info==save->link->info){
                save->link=save->link->link;
                free(save->link);
                save=save->link;
                count++;
            }
            if(count==0){
                save=save->link;
            }
        }
    }
}

void main(){
    // code
}