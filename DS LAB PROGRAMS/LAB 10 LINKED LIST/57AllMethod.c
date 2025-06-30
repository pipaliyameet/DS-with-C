#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
};

struct Node* first = NULL;

void insertIntoFirst(){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter a value of newNode");
    scanf("%d",&newNode->info);
    if(first==NULL){
        first=newNode;
    }else{
        newNode->link=first;
        first=newNode;
    }
}

void INSEND(){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    
    printf("Enter a value of newNode");
    scanf("%d",&newNode->info);

    if(first==NULL){
        first=newNode;
    }
    else{
        struct Node *save = first;
        save->link=first;
        while(save->link!=NULL){
            save=save->link;
        }
        save->link=newNode;
    }
}

void INSORD(){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node*));

    printf("Enter a value of node : ");
    scanf("%d",&newNode->info);

    if(first==NULL){
        first=newNode;
    }
    else if(newNode->info <= first->info){
        newNode->link=first;
    }
    else{
        struct Node* save =first;
        save->link=first;

        while((save->link!=NULL)&&(newNode->info>=save->link->info)){
            save=save->link;
        }
        newNode->link=save->link;
        save->link=newNode;
    }
}

void deleteFirsNode(){
    struct Node* delete = first;
    first=first->link;
    free(delete);
}

void deletLastNode(){
    if(first==NULL){
        free(first);
    }
    else{
        struct Node* delete;
        delete =first;
        while(delete!=NULL){
            delete=delete->link;
        }
        free(delete);
    }
}

void deleteOrderNode(int *delete){
    if(first=NULL){
        free(first);
    }
    else{
        struct Node* save=first;
        struct Node* pred;
        while(delete!=save->link ){
            pred->link=save;
            save=save->link;
        }
        if(save->link!=NULL){
            pred->link=save->link;
            free(save);
        }
    }
}

int countNode(){
    int count=0;
    if(first==NULL){
        return count;
    }
    else{
        struct Node* save = first;
        while(save->link!=NULL){
            count++;
            save=save->link;
        }
        return count;
    }
}

void main(){
    //code
}