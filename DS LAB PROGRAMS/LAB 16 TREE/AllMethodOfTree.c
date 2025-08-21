#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

void RPreOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        printf("value = %d  ,",t->info);
        if(t->lptr!=NULL){
            RPreOrder(t->lptr);
        }if(t->rptr!=NULL){
            RPreOrder(t->rptr);
        }
    }
}

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

void RPostOrder(struct node *t){
    if(t==NULL){
        printf("Your tree is empty");
    }else{
        if(t->lptr!=NULL){
            RPostOrder(t->lptr);
        }
        if(t->rptr!=NULL){
            RPostOrder(t->rptr);
        }
        printf("value : %d ,",t->info);
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
                printf("Duplicate Element");
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

struct node * deleteNode(struct node *root, int val){
    if(root==NULL){
        printf("Your tree is empty");
        return root;
    }
    else{
        struct node *next=root;
        if(next->info==val){
            struct node *temp=next->rptr;
            root=temp;
            struct node *temp2=next->lptr;
            root = temp;
            free(next);
            while(temp->lptr!=NULL){
                temp=temp->lptr;
            }
            temp->lptr=temp2;
            return root;
        }
        else{
            while(next->lptr!=NULL && next->rptr!=NULL){
                if(next->rptr->info==val){
                    struct node *save=next->rptr;
                    struct node *temp2=save->lptr;
                    next->rptr=save->rptr;
                    free(save);
                    struct node *temp=next->rptr;
                    while(temp->lptr!=NULL){
                        temp=temp->lptr;
                    }
                    temp->lptr=temp2;
                    break;
                }
                else if(next->lptr->info==val){
                    struct node *save=next->lptr;
                    struct node *temp2=save->lptr;
                    next->lptr=save->rptr;
                    free(save);
                    struct node *temp=next->lptr;
                    while(temp->lptr!=NULL){
                        temp=temp->lptr;
                    }
                    temp->lptr=temp2;
                    break;
                }
                if(next->info>val){
                    next=next->lptr;
                }else{
                    next=next->rptr;
                }
            }
            return root;
        }
    }
}

void searchNode(struct node *root,int val){
    if(root==NULL){
        printf("Your Tree is empty");
    }
    else{
        struct node *next=root;
        int count=0;
        while (next!=NULL){
            if(next->info==val){
                printf("Your value is *avilable* in tree");
                count++;
                break;
            }
            if(next->info>val){
                next = next->lptr;
            }
            else if(next->info<val){
                next = next->rptr;
            }
        }
        if(count==0){
            printf("Your value is *not avilable* in tree");
        }
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
    
    int temp;
    while(1){
        printf("\nif you delete node so enter 1 or if you search node so enter 2 : ");
        scanf("%d",&n);
        if(n==1){
            printf("Enter a value who you delete : ");
            scanf("%d",&temp);
            root = deleteNode(root,temp);
        }
        if(n==2){
            printf("Enter a value who you search : ");
            scanf("%d",&temp);
            searchNode(root,temp);
        }
        else{
            break;
        }
    }

    printf("Inorder = ");
    RInOrder(root);
    printf("\nPreorder = ");
    RPreOrder(root);
    printf("\nPostorder = ");
    RPostOrder(root);

    printf("\n Your Program is end");
}
