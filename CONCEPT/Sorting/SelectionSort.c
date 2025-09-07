#include<stdio.h>
void main(){
    int l;
    printf("len = ");
    scanf("%d",&l);
    int arr[l];
    for(int i=0;i<l;i++){
        printf("%d element = ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<l ; i++){
        int smallest = arr[i];
        for(int j=i+1 ; j<l ; j++){
            if(arr[j] < smallest){
                int temp = smallest;
                smallest = arr[j];
                arr[j]=temp;
            }
        }
        arr[i]=smallest;
    }

    for(int i=0;i<l;i++){
        printf("%d element = %d \n",i,arr[i]);
    }
}