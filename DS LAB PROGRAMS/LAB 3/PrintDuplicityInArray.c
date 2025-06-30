#include <stdio.h>

void main(){
    int n ,count;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ;i<n ;i++){
        printf("enter %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("duplicate = ");
    for(int i=0 ; i<n ; i++){
        for(int j=(i+1) ; j<n ;j++){
            if(arr[i]==arr[j]){
                printf("%d ,",arr[i]);
                break;
            }
        }
    }

    printf("\nno duplicate = ");
    for(int i=0 ; i<n ; i++){
        count =0;
        for(int j=0 ; j<n ;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d ,",arr[i]);
        }
    }
}