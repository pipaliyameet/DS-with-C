#include <stdio.h>

void main(){
    int arr[]={1 ,2 , 3, 4, 5};
    int* ptr=arr;
    printf("Address of array = %d",ptr);
    printf("\nValu of first element in array = %d",*(ptr+1));
    printf("\nAdd in Address : %d",(ptr+1));
}