#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;
    struct node *lptr;
    struct node *rptr;
};

int preOrder[100];
int postOrder[100];

int deleteByIndex(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid index!\n");
        return size; // Return original size if index is invalid
    }
    
    // Shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    return size - 1; // Return new size
}

struct Node * addChild(struct Node *root ,int i ,int n){
    struct Node *first =root;
    struct Node *temp =root;
    if((i+1)!=0){
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->info=preOrder[i+1];
        temp->lptr=newNode;
        int j=0;
        while(j<n){
            if(preOrder[i+1]==postOrder[j]){
                break;
            }
            j++;
        }
        if(j!=0){
            addChild(temp->lptr,i+1,n);
            n = deleteByIndex(postOrder,n,1);
            n = deleteByIndex(postOrder,n,1);
            n = deleteByIndex(postOrder,n,1); 
        }
    }
}
void main(){
    int n;
    printf("How many value in your traversal : ");
    scanf("%d",&n);
    printf("**Preorder Traversal**\n");
    for(int i=0 ;i<n ;i++){
        printf(" Enter a value = ");
        scanf("%d",&preOrder[i]);
    }
    printf("**Postorder Traversal**\n");
    for(int i=0 ;i<n ;i++){
        printf(" Enter a value = ");
        scanf("%d",&postOrder[i]);
    }
    int i=0;
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->info=preOrder[i];
    struct Node *root=newNode;
    root = addChild(newNode,i,n);
}