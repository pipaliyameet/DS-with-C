#include <stdio.h>

void main(){
    int n;
    printf("Enter a langth : ");
    scanf("%d",&n);
    int array[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter a element number %d is = ",(i));
        scanf("%d",&array[i]);
    }

    int deleteElement , indexOfDeleteElement;
    printf("Enter a element who you delete : ");
    scanf("%d",&deleteElement);
    printf("Enter a index of element who you delete : ");
    scanf("%d",&indexOfDeleteElement);

    if(indexOfDeleteElement <0 || indexOfDeleteElement>n){
        printf("Invalid index");
    }
    else{
        array[n-1];
        for(int i=0 ; i<n-1 ; i++){
            if(i==indexOfDeleteElement){
                for(i ;i<n-1 ;i++){
                    array[i]=array[i+1];
                }
                break;
            }
            array[i] = array[i];
        }

        for(int j=0 ; j<n-1 ; j++){
            printf("%d element is = %d\n",(j),array[j]);
        }
    }
}