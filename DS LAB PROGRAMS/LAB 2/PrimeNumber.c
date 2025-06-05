#include <stdio.h>
int prime(int n){
    int count=0;

    for(int temp=2 ; temp<=(n/2) ; temp++){
        if(n%temp==0){
            count++;
        }
        else{
            continue;
        }
    }
    if(count==0){
        printf("Number is prime");
    }
    else{
       printf("Number is not prime"); 
    }
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
}