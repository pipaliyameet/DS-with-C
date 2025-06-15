#include <stdio.h>

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

void main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i ; j++){
            int temp = (i-j);
            int combination = ((factorial(i))/((factorial(j))*(factorial(temp))));
            printf("%d ",combination);
        }
        printf("\n");
    }
}