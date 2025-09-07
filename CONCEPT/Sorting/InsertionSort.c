#include<stdio.h>
void main (){
    int l;
    printf("len = ");
    scanf("%d",&l);
    int arr[l];
    for(int i=0;i<l;i++){
        printf("%d element = ",i);
        scanf("%d",&arr[i]);
    }

    int key;
    for( int i=1 ;i<l ;i++){
        key = arr[i];
        int j= i-1 ;
        while((j>=0) && (key<arr[j])){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    printf("~Sorted array is ~\n");
    for(int i=0;i<l;i++){
        printf("%d element = %d \n",i,arr[i]);
    }
}