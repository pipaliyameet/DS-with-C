#include <stdio.h>

void main(){
    int n ,e1 ,e2;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ;i<n ;i++){
        printf("enter %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("Enter element you replace :");
    scanf("%d",&e1);
    printf("Enter element who you replece with : ");
    scanf("%d",&e2);

    for(int i=0 ; i<n ; i++){
        if(arr[i]==e1){
            arr[i]=e2;
        }
    }

    for(int j=0 ;j<n ;j++){
        printf("your element number %d is = %d and index = %d\n",(j+1),arr[j],j);
    }
}