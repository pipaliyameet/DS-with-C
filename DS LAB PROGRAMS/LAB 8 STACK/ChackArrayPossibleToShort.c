#include<stdio.h>

int s[100];
int top = -1;

void push(int x) {
    s[++top] = x;
}

int pop() {
    if (top == -1) return -1;
    int temp = s[top];
    int temp2=top;
    top--;
    deleteElement(s,temp2);
    return temp;
}


void deleteElement(int arr[], int pos) {
    // Find the actual size by looking for sentinel value
    int size = 0;
    while (arr[size] != -1 && size < 100) { // 100 is arbitrary large size
        size++;
    }
    
    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
        return;
    }
    
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Move the sentinel value one position left
    arr[size - 1] = -1;
}


void main(){
    int n ,t=1 ,count=0 ,i=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a[n];
    int b[100];

    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    while(a[i] != NULL && top != -1){
        push(a[i]);
        deleteElement(a,i);
        while(s[top] == t){
            b[count++] = pop();
            t++;
            i++;
        }
        i=0;        
    }

    if(top ==-1){
        printf("YES");
    }else{
        printf("NO");
    }
}