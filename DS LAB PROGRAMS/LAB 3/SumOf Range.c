#include <stdio.h>

void main(){

    int n ,m ,sum=0;
    printf("Enter Starting number : ");
    scanf("%d",&n);
    printf("Enter Ending number : ");
    scanf("%d",&m);
    
    for(n ;n<=m ;n++){
        sum+=n;
    }
    printf("Sum is = %d",sum);
}