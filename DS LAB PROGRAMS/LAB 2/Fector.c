#include <stdio.h>
int fectors(int n){
    int count=0;
    printf("this number fector is = ");

    for(int temp=2 ; temp<=(n/2) ; temp++){
        if(n%temp==0){
            printf("%d ,",temp);
        }
    }
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fectors(n);
}