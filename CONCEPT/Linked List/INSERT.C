#include <stdio.h>
#include <stdlib.h>

struct Node{
    int element;
    struct Node *link;
};

struct Node *newNode = NULL; 

void linkListInsert(struct Node *ptr){
    while(ptr!=NULL){
        printf("ELEMENT : %d\n",ptr->element);
        ptr= ptr->link;
    }
}

void INSERT(int element){
    // struct node *first = (struct node *)malloc(sizeof(newNode));

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node *newNode;

    //allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    newNode = (struct Node *)malloc(sizeof(struct Node));

    
    // first->element=7;
    // first->next=NULL;

    if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    // newNode=element;
    newNode->element=8;
    newNode->link=head;

    head->element=7;
    head->link=second; 

    // link second and third node
    second->element=11;
    second->link=third; 

    // link thirdand fourth node
    third->element=66;
    third->link=fourth; 

    // Terminat the list at the fourth node
    fourth->element=70;
    fourth->link=NULL;
    linkListInsert(newNode);


}

int main(){
    INSERT(10);
    // INSERT(20);
    return 0;
}