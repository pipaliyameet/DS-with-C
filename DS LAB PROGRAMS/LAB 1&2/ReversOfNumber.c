#include <stdio.h>

int reversOf(int n){
    int x=0;
    for(n ; n>0 ; n=n/10){
        int remainder = n%10;
        x= (x*10) +remainder;
    }
    return x;
}
void main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int x = reversOf(n);

    printf("%d",x);

}