#include <stdio.h>
#include <stdlib.h>

struct Node{
    int info;
    struct Node* link;
};
struct Node* first=NULL;

void insertAtFirst(){
    if(first==NULL){
        printf("Your linked list is empty");
    }
    else{
        struct Node* newNode= (struct Node*)malloc(sizeof(struct Node*));
        printf("Enter a value of new node : ");
        scanf("%d",&newNode->info);
        newNode->link=first;
        first=newNode;
    }
}
void main(){}