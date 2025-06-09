#include <stdio.h>

void Refrence(int* ptr){//pass by refrence usuing pointer
    *ptr=20;
}
void main(){
    int a=10;
    Refrence(&a);
    printf("%d",a);
}