#include <stdio.h>

int power(int n,int p){
    if(p==1){
        return n;  
    }
    else if(p==0){
        return 0;
    }
    else{
    return n*power(n,(p-1));
    }
}
void main(){

    int n;
    int p;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter thair power : ");
    scanf("%d",&p);

    int e = power(n,p);
    printf("%d",e);
}