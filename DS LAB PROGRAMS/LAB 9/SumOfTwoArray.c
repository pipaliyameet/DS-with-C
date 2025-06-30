#include <stdio.h>
#include <stdlib.h>

void main(){

    int n ,m;
    printf("Enter a length of array : ");
    scanf("%d",&n);

    int* firstArr = (int*)malloc(sizeof(firstArr[n]));

    for(int i=0 ;i<n ;i++){
        printf("Enter a element no %d is = ",i);
        scanf("%d",(firstArr+i));
    }

    int sum=0;
    for(int i=0 ;i<n ;i++){
        sum+=firstArr[i]; 
    }

    printf("Sum of your array is = %d",sum);

    free(firstArr);
}