#include <stdio.h>

void main(){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];

    for(int i=0 ;i<n ;i++){
        printf("enter %d element : ",(i+1));
        scanf("%d",&arr[i]);
    }

    for(int j=0 ;j<n ;j++){
        printf("your element number %d is = %d/n",(j+1),arr[j]);
       
    }
}