#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *lptr;
    struct node* rptr;
};

void display(struct node *l){
    struct node *save=l;
    while(save!=NULL){
        printf("Element = %d\n",save->info);
        save=save->rptr;
    }
}

struct node * insertAtLast(struct node *l){
    int x ,count=1;
    printf("Num of node : ");
    scanf("%d",&x);

    struct node *first = (struct node*)malloc(sizeof(struct node));
    printf("Enter a value = ");
    scanf("%d",&first->info);
    first->rptr=NULL;
    l=first;
    
    struct node *save =first;
    while(count!=x){
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter a value = ");
        scanf("%d",&newNode->info);
        newNode->rptr=NULL;
        save->rptr=newNode;
        newNode->lptr=save;
        save=newNode;
        // save=save->rptr;
        count++;
    }
    save->rptr=NULL;
    return l;
}
void deleteOrder(struct node *s){
    if(s==NULL){
        printf("Your linked list is emty");
    }else{
        struct node *t=s;
        if(t->lptr==NULL){
            struct node *t2=s->rptr;
            t2->lptr=NULL;
            t->rptr=NULL;
            free(t);
        }else{
            t->lptr->rptr=t->rptr;
            t->rptr->lptr=t->lptr;
            t->lptr=NULL;
            t->rptr=NULL;
            free(t);
        }
    }
}
void deletAlternateNode(struct node *l ,int x){
    if(l==NULL){
        printf("Your linked list is empty");
    }
    else{
        struct node *save=l;
        if((x%2)==0){
            save = l->rptr;
        }else{
            l=l->rptr;
        }

        while(save!=NULL){
            if(save->rptr==NULL){
                save->lptr->rptr=NULL;
                free(save);
                break;
            }
            struct node *temp =save;
            save=save->rptr->rptr;
            deleteOrder(temp);
        }
        display(l);
    }
}

void main(){
    struct node *l =NULL;
    l=insertAtLast(l);
    display(l);
    int temp;
    printf("If you delete odd seqence so enter odd number or If you delete even seqence so enter even number : ");
    scanf("%d",&temp);
    deletAlternateNode(l ,temp);
}