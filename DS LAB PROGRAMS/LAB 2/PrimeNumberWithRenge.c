#include <stdio.h>
int prime(int n,int m){

    for( n ; n<=m ; n++){
        int count=0;
        for(int temp=2 ;temp<n;temp++){
            if(n%temp==0){
            count++;
            }
            else{
                continue;
            }
        }
        if(count==0){
            printf("%d ",n);
        }
        else{
            continue;
        }
    }
}
void main(){
    int n;
    int m;
    printf("Enter first number : ");
    scanf("%d",&n);
    printf("Enter second number : ");
    scanf("%d",&m);
    prime(n,m);
}