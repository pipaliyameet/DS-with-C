#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

void change(){
    stack[top]=' ';
}

void main(){
    char c[100];
    printf("Enter a String with STAR : ");
    scanf("%s",c);

    for(int i=0 ;i<strlen(c) ;i++){
        if(c[i]!='*'){
            push(c[i]);
        }else if(c[i]=='*') {
            change();
            top--;
        }
    }
    printf("String is = %s",stack);
}