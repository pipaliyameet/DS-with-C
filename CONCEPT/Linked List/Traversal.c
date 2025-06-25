#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void linkListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("ELEMENT : %d\n",ptr->data);
        ptr= ptr->next;
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    
    // link first and second node
    head->data=7;
    head->next=second; 

    // link second and third node
    second->data=11;
    second->next=third; 

    // link thirdand fourth node
    third->data=66;
    third->next=fourth; 

    // Terminat the list at the fourth node
    fourth->data=70;
    fourth->next=NULL;

    linkListTraversal(head);

    return 0;
}