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

    for(int i=0 ;i<n ;i++){
        for(int j=(i+1) ;j<n ;j++){
            if(firstArr[i]>firstArr[j]){
                int temp = firstArr[i];
                firstArr[i]=firstArr[j];
                firstArr[j]=temp;
            }
        }
    }

    printf("~ Shorted array is ~ \n");
    for(int i=0 ;i<n ;i++){
        printf("your element no %d is = %d\n",i,*(firstArr+i));
    }
    free(firstArr);
}