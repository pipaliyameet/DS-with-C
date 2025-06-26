#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

struct Node{
    int info;
    struct Node* link;
};

struct Node* first = NULL;
struct Node* second = NULL;
int ChackEqality(){
    struct Node* save = first;
    struct Node* save2 = second;

    while((save->link!=NULL) && (save2->link!=NULL)){
        if(save->info == save2->info){
            save = save->link;
            save2 = save2->link;
        }
        else{
            break;
        }
    }
    if(save->link==NULL && save2->link==NULL){
        return true;
    }
    else{
        return false;
    }
}

void main(){
    //code
}