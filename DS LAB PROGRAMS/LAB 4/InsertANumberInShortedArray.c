#include <stdio.h>

void main(){

    int n;
    printf("Enter a length of array : ");
    scanf("%d",&n);

    int array[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter a element number %d is = ",i);
        scanf("%d",&array[i]);
    }

    int newElement , indexOfNew;
    printf("Enter a element who you insert : ");
    scanf("%d",&newElement);

    int newArray[n+1];
    for(int i=0 ; i<n+1 ;i++){
        newArray[i]=array[i];
        if(newElement>array[i] && newElement<array[i+1]){
            newArray[i+1]=newElement;
            for(i=i+2 ; i<=n ; i++){
                newArray[i]=array[i-1];
            }
            break;
        }
    }

    for(int j=0 ; j<=n ; j++){
        printf("%d element is = %d\n",(j),newArray[j]);
    }
}