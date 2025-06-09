#include <stdio.h>

void main(){

    int second;
    printf("Enter seconds : ");
    scanf("%d",&second);

    int hour = (second/3600);
    second = (second%3600);
    int minut = (second/60);
    second = (second%60);

    printf("Time is = %d : %d : %d",hour,minut,second);
}