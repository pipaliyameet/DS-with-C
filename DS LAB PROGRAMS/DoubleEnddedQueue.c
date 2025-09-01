#include <stdio.h>

int queue[100];
int front =-1;
int rear=-1;

void dqInsertFront(int n ,int l){
    if(front==0){
        printf("\nQueue overflow");
        return;
    }else if(front==-1){
        front=rear=0;
    }else{
        front--;
    }
    queue[front]=n;
}

void dqInsertEnd(int l,int n){
    if(rear == l){
        printf("\nQueue overflow");
        return;
    }
    rear++;
    queue[rear]=n;
    if(front==-1){
        front=1;
    }
}

int dqDeleteRear(){
    if(rear==-1){
        printf("\nQueue underflow");
    }
    else {
        int y = queue[rear];
        if(rear==front){
            rear=front=0;
        }else{
            rear--;
        }
        return y;
    }
}

int dqDeleteFront(){
    if(front==-1){
        printf("\nQueue underflow");
    }
    else if(front<rear){
        return queue[front++];
    }
    else if(front== rear){
        rear=-1;
        return queue[front--];
    }
}

void main(){
    int n;
    printf("\nEnter a length of queue : ");
    scanf("%d",&n);
    int temp;
    int value;
    for(int i=0 ;i<n ;i++){
        printf("\nIf you enter element so enter 1 or you delete so enter 2 : ");
        int temp2;
        scanf("%d",&temp2);
        if(temp2==1){
            printf("\nEnter a value : ");
            scanf("%d",&value);
            printf("\nIf you enter front of queue so enter 1 other wise enter any key : ");
            scanf("%d",&temp);
            if(temp==1){
                dqInsertFront(value,n);
            }
            else{
                dqInsertEnd(value,n);
            }
        }
        else if(temp2==2){
            printf("\nIf you delete front of queue so enter 1 other wise enter any key : ");
            scanf("%d",&temp);
            if(temp==1){
                printf("%d",dqDeleteFront());
            }
            else{
                printf("%d",dqDeleteRear());
            }
        }
    }

    for(int i=0 ;i<n ;i++){
        printf("Index %d = %d",i,queue[i]);
    }


}