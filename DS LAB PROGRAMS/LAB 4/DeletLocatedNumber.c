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
    printf("Enter a element who you delet : ");
    scanf("%d",&newElement);
    printf("Enter a index of element who you delet : ");
    scanf("%d",&indexOfNew);

    if(indexOfNew <0 || indexOfNew>n){
        printf("Invalid index");
    }
    else{
        int newArray[n-1];
        for(int i=0 ; i<(n-1) ; i++){
            if(i==indexOfNew){
                for(i ; i<(n-1) ; i++){
                    newArray[i]=array[i+1];
                }
                break;
            }
            else{
                newArray[i]=array[i];
            }
        }
        for(int j=0 ; j<(n-1) ; j++){
            printf("%d element is = %d\n",(j),newArray[j]);
        }
    }
}