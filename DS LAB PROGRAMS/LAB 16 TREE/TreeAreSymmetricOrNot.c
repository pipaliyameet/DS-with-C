#include<stdio.h>

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

struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = value;
    newNode->lptr = NULL;
    newNode->rptr = NULL;
    return newNode;
}

void insert(struct node* root) {
    int choice;
    int value;

    printf("Insert to LEFT (1) or RIGHT (2) of node with value %d? ", root->info);
    scanf("%d", &choice);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (choice == 1) {
        if (root->lptr == NULL) {
            root->lptr = createNode(value);
        } else {
            insert(root->lptr);
        }
    } else if (choice == 2) {
        if (root->rptr == NULL) {
            root->rptr = createNode(value);
        } else {
            insert(root->rptr);
        }
    } else {
        printf("Invalid choice. Try again.\n");
        insert(root);
    }
}

struct node* createTree() {
    int n, value;

    printf("Enter value for root node: ");
    scanf("%d", &value);
    struct node* root = createNode(value);

    printf("How many more nodes to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        insert(root);
    }

    return root;
}

int same(struct node *root1 ,struct node *root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }    
    else if(root1==NULL || root2==NULL){
        return 0;
    }  
    else if(root1->info != root2->info){
        return 0;
    }  
    return (same(root1->lptr ,root2->lptr) &&same(root1->rptr , root2->rptr));
}

int symmetric(struct node *root){
    if(root->lptr==NULL && root->rptr==NULL){
        return 1;
    }else if(root->lptr!=NULL && root->rptr!=NULL){
        return 0;
    }else{
        return same(root->lptr,root->rptr);
    }
}

void main(){
    struct node *root1 = createTree();

    printf("Inorder = ");
    RInOrder(root1);

    printf("\nYour tree are symmetric or not :");
    int temp= symmetric(root1);
    if(temp==1){printf("true");}
    else{printf("false");}
    
}