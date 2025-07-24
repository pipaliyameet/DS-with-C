#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

char pop(){
    return stack[--top];
}

void main(){
    char c[100];
    printf("Enter a string : ");
    scanf("%s",c);
    for(int i=0 ;i<strlen(c) ;i++){
        push(c[i]);
    }

    printf("stack = %s\n",stack);
    int countA=0 ,countB=0;

    for(int i=0 ;i<=strlen(stack) ;i++){
        char c=pop();
        if(c=='a'){
            countA++;
        }else{
            countB++;
        }
    }
    if(countA==countB){
        printf("Your string char is a^%db^%d form",countA,countB);
    }else{
        printf("Your string is not valid form");
    }
}