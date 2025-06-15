#include <stdio.h>

void main(){

    int n;
    printf("Enter a length of array : ");
    scanf("%d",&n);
    int array[n];

    for(int i=0 ; i<n ; i++){
        printf("Element no %d is = ",i);
        scanf("%d",&array[i]);
    }

    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=(i+1) ; j<n ; j++){
            if(array[i]==array[j]){
                count++;
                break;
            }
        }
    }
    printf("duplicate element number is : %d",count);

    int newArray[n-count];
    int temp=0;
    for(int i=0 ; i<n ; i++){
        int duplicates =0;
        for(int j=0 ; j<temp ; j++){
            if(newArray[j]==array[i]){
                count++;
                break;
            }
        }
        if(duplicates==0){
            newArray[temp]=array[i];
            temp++;
        }
    }

    printf("Without deplicats array is....\n");
    for(int j=0 ; j<temp ;j++){
        printf("\nElement no %d is = %d",j,newArray[j]);
    }
}