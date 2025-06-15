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

    int deletElement ;
    printf("Enter a element who you delet : ");
    scanf("%d",&deletElement);

    int newArray[n-1];
    for(int i=0 ; i<n-1 ;i++){
        if(deletElement==array[i] && deletElement<array[i+1]){
            for(i ; i<n ; i++){
                newArray[i]=array[i+1];
            }
            break;
        }
        newArray[i]=array[i];
    }

    for(int j=0 ; j<(n-1) ; j++){
        printf("%d element is = %d\n",(j),newArray[j]);
    }
}