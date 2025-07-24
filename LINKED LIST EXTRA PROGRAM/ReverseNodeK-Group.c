#include <stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node * makeALinkedList(struct node *first){
    int x ,count=1;
    printf("How many node you insert : ");
    scanf("%d",&x);

    struct node *newNode = (struct node*)malloc(sizeof(struct node*));
    printf("Enter value : ");
    scanf("%d",&newNode->info);
    first = newNode;
    struct node *save=first;
    while(count<x){
        struct node *newNode = (struct node*)malloc(sizeof(struct node*));
        printf("Enter value : ");
        scanf("%d",&newNode->info);
        newNode->link=NULL;
        save->link=newNode;
        save=newNode;
        count++;
    }
    return first;
}

void display(struct node *first){
    struct node *save=first;
    while(save!=NULL){
        printf("Value = %d\n",save->info);
        save=save->link;
    }
}

void reversNodeKGroup(struct node *first ,int k){
    if(first == NULL){
        printf("Your linked list is empty");
    }else{
        struct node *final=first;
        struct node *save=first;
        int count=1;
        while(save->link!=NULL){
            if(count==k){
                save = save->link;
                count=0;
                struct node *next=first->link;
                struct node *current=NULL;
                struct node *pred=first;
                while(count<k){
                    if(count==0){
                        current=next;
                        // first=current;
                        next=next->link;
                        current->link=pred;
                        pred=current;
                        count++;
                        continue;
                    }
                    current=next;
                    next=next->link;
                    current->link=pred;
                    pred=current;
                    count++;
                }
                final->link=save;
                first=current;
                break;
            }
            save=save->link;
            count++;
        }
        display(first);
    }
}
void main(){
    struct node *first=NULL;
    struct node *save=makeALinkedList(first);
    printf("heyy");
    display(save);
    display(save);

    int k;
    printf("Enter a k : ");
    scanf("%d",&k);
    reversNodeKGroup(save,k);
}

