#include <stdio.h>

void main(){
    int n ;
    printf("Enter a length of array : ");
    scanf("%d",&n);
    int a[n];

    for(int i=0 ;i<n ;i++){
        printf("Enter a element no %d is = ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0 ;i<n ;i++){
        if(a[i]==0){
            for(int j= (n-1) ;j>=0 ;j--){
                if(a[j]!=0){
                    int temp = a[j];
                    a[j]=0;
                    a[i]=temp;
                    break;
                }
            }
        }
    }

    for(int i=0 ;i<n ;i++){
        printf("Your a element no %d is = %d \n",i,a[i]);
    }
}