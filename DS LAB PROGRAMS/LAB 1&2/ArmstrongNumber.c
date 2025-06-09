#include <stdio.h>

void main(){

    int number ,count=0 ,temp ,temp2 ,remainder ,power ,sum=0;
    printf("Enter a number : ");
    scanf("%d",&number);

    temp = number;
    while(temp>0){
        count++;
        temp= temp/10;
    }

    temp2=number;
    while(temp2>0){
        remainder=temp2%10;
        power=1;
        for(int i=1 ;i<=count ;i++){
            power*=remainder;
        }
        sum+=power;
        temp2=temp2/10;
    }
    if(sum==number){
        printf("Armstrong");
    }
    else{
        printf("not");
    }
}