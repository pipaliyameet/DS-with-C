#include <stdio.h>

void main(){

    int days;
    printf("Enter day : ");
    scanf("%d",&days);

    int year = (days/365);
    days = (days%365);
    int week = (days/7);
    days = (days%7);

    printf("year , week and day is = %d : %d : %d",year,week,days);
}