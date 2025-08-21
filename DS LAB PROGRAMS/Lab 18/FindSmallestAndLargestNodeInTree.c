#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

void RInOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        if(t->lptr!=NULL){
            RInOrder(t->lptr);
        }
        printf("value : %d ,",t->info);
        if(t->rptr!=NULL){
            RInOrder(t->rptr);
        }
    }
}

struct node * insert(struct node *root){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value : ");
    scanf("%d",&newNode->info);
    newNode->lptr = NULL;
    newNode->rptr = NULL;

    if(root==NULL){
        return newNode;
    }

    else{
        struct node *temp=root;
        while(1){
            if(temp->info==newNode->info){
                printf("Duplicate Element\n");
                free(newNode);
                break;
            }
            if(temp->info > newNode->info){
                if(temp->lptr==NULL){
                    temp->lptr = newNode;
                    break;
                }else{
                    temp = temp->lptr;
                }
            }
            else{
                if(temp->rptr==NULL){
                    temp->rptr = newNode;
                    break;
                }else{
                    temp = temp->rptr;
                }
            }
        }
    }
    return root;
}

void Smallest(struct node *root){
    if(root->lptr!=NULL){
        return Smallest(root->lptr);
    }else{
        printf("\nSmallest node value is = %d",root->info);
    }
}

void Largest(struct node *root){
    if(root->rptr!=NULL){
        return Largest(root->rptr);
    }else{
        printf("\nLargest node value is = %d",root->info);
    }
}

void main(){
    
    struct node *root = NULL;

    int n;
    printf("How many node you insert : ");
    scanf("%d",&n);

    for(int i=0 ;i<n ;i++){
        root = insert(root);
    }

    printf("Inorder = ");
    RInOrder(root);

    Smallest(root);
    Largest(root);
}