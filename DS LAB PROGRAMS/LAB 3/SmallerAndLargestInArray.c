#include <stdio.h>

void main(){
    int n ,max=0 ,min=0 ,maxPos ,minPos;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ;i<n ;i++){
        printf("enter %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    for(int i=0 ;i<n ;i++){
        if(arr[i]>max){
            max=arr[i];
            maxPos=i;
        }
        if(arr[i]<min){
            min =arr[i];
            minPos=i;
        }
    }
    printf("max = %d and thair index = %d",max,maxPos);
    printf("\n");
    printf("min = %d and thair index = %d",min,minPos);
}