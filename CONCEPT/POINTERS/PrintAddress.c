#include <stdio.h>

void main(){
    int a=10;
    // printf("a normel Addres = %d",&a);

    printf("\n");

    int* ptr = &a;
    // printf("a Addres by pointer = %d",ptr);

    int** Parptr = &ptr;
    // printf(" Addres = %d \n Values = %d",&ptr,Parptr);

    printf("Drefrance = %d",*(&a));
    printf("\nDrefrance = %d",*(ptr));
    printf("\nDrefrance = %d",*(*(Parptr)));


}