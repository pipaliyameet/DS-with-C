#include <stdio.h>

void main(){

    int n ,sum=0 ,count=0;
    printf("Enter number : ");
    scanf("%d",&n);
    
    for(int i=0 ;i<=n ;i++){
        sum+=i;
        count++;
    }
    printf("Sum is = %d\n",sum);
    printf("Avg is = %d",(sum/count));

}