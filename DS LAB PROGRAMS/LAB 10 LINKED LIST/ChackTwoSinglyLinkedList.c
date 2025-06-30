#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Node{
    int info;
    struct Node* link;
};


void insertIntoFirst(struct Node *first){
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter a value of newNode : ");
    scanf("%d",&newNode->info);
    if(first==NULL){
        first=newNode;
    }else{
        newNode->link=first;
        first=newNode;
    }
}

void linkListTraversal(struct Node *ptr){
    while(ptr->link!=NULL){
        printf("ELEMENT : %d\n",ptr->info);
        ptr= ptr->link;
    }
}

int ChackEqality(struct Node *ptr1 ,struct Node *ptr2){
    struct Node* save = ptr1;
    struct Node* save2 = ptr2;

    while((save->link!=NULL) && (save2->link!=NULL)){
        if(save->info != save2->info){
            return 1;       
        }   
        save = save->link;
        save2 = save2->link;
    }
    if(save->link==NULL && save2->link==NULL){
        return 0;
    }
    return 1;
}

void main(){
    
    struct Node *first = NULL;
    struct Node *second = NULL;
    int temp;
    while (temp !=0)
    {
        printf("1 for enter a element in linked list\n");
        printf("2 for compare linked list\n");
        int choice , linkedList;
        printf("Enter a choice : ");
        scanf("%d",&choice);

        if(choice==1){
            printf("number of linked list which you insert : ");
            scanf("%d",&linkedList);
        }
        switch (choice)
        {
        case 1:
            if(linkedList==1){
                insertIntoFirst(first);
            }
            else if(linkedList==2){
                insertIntoFirst(second);
            }else{
                printf("invalid link choice");
            }
        case 2:
            temp = ChackEqality(first,second);
            break;
        default:
            break;
        }
    }
    if(temp==0){
        printf("Your linked list is same");
    }else{
        printf("Your linked list is not same");
    }
}
