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

    int temp = 0;
    int last = (l);
    for ( int i=0 ; i<l ; i++ ) {
        for ( int j=0 ; j < (last-1) ; j++ ) {
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                temp = temp+1;
            }
        }
        if(temp==0){
            printf("~Array is alredy sorted ~ \n");
            return;
        }
        last--;
    }

    printf("~Sorted array is ~\n");
    for(int i=0;i<l;i++){
        printf("%d element = %d \n",i,arr[i]);
    }
}