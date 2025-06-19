#include <stdio.h>
#include <stdlib.h>

void main(){

    int n;
    printf("Enter a length of array : ");
    scanf("%d",&n);
    int* arr = (int*)malloc(sizeof(arr[n]));

    for(int i=0 ;i<n ;i++){
        printf("Enter a element no %d is = ",i);
        scanf("%d",(arr+i));
    }

    for(int i=0 ;i<n ;i++){
        printf("your element no %d is = %d\n",i,*(arr+i));
    }

    
        free(arr);
}