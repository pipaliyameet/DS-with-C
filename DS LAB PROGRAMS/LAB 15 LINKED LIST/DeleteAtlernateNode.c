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

void deletAlternateNode(struct node *l ,int x){
    if(l==NULL){
        printf("Your linked list is empty");
    }
    else{
        struct node *save=l;
        int n=0 ,m=-1 ,i=1;
        if((x%2)==0){
            n=1;
        }else{
            m=0;
            l=l->rptr;
        }
        while(save!=NULL){
            if(i==(2*n)){
                struct node *temp=save;
                save = save->rptr;
                temp->lptr->rptr=temp->rptr;
                temp->rptr->lptr=temp->lptr;
                free(temp);
                n++;
            }
            if(i==(m+1)){
                struct node *temp=save;
                save = save->rptr;
                if(i!=1){
                    temp->lptr->rptr=temp->rptr;
                }
                temp->rptr->lptr=temp->lptr;
                free(temp);
                m+=2;
            }
            else{
                save=save->rptr;
            }
            i++;
        }
        display(l);
    }
}

void main(){
    struct node *first ,*second ,*third ,*fourth ,*fifth;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));

    first->info=1;
    first->lptr=NULL;
    first->rptr=second;

    second->info=2;
    second->lptr=first;
    second->rptr=third;

    third->info=3;
    third->lptr=second;
    third->rptr=fourth;

    fourth->info=4;
    fourth->lptr=third;
    fourth->rptr=fifth;

    fifth->info=5;
    fifth->lptr=fourth;
    fifth->rptr=NULL;

    display(first);
    int temp;
    printf("If you delete odd seqence so enter odd number or If you delete even seqence so enter even number : ");
    scanf("%d",&temp);
    deletAlternateNode(first ,temp);
}