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

    int newElement , indexOfNew;
    printf("Enter a element who you insert : ");
    scanf("%d",&newElement);
    printf("Enter a index of element who you insert : ");
    scanf("%d",&indexOfNew);

    if(indexOfNew <0 || indexOfNew>n){
        printf("Invalid index");
    }
    else{
        int newArray[n+1];
        for(int i=0 ; i<=n ; i++){
            if(i==indexOfNew){
                newArray[i]=newElement;
                for(i ; i<=n ; i++){
                    newArray[i+1]=array[i];
                }
                break;
            }
            else{
                newArray[i]=array[i];
            }
        }
        for(int j=0 ; j<=n ; j++){
            printf("%d element is = %d\n",(j),newArray[j]);
        }
    }
}