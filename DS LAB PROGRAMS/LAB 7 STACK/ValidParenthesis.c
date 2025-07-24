#include <stdio.h>
#include <string.h>

char stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

char pop(){
    return stack[top--];
}

void main(){
    char c[100];
    printf("Enter a string : ");
    scanf("%s",c);
    
    int count=0;
    for(int i=0 ;i<strlen(c) ;i++){
        if(c[i]=='(' || c[i]=='{' || c[i]=='['){
            push(c[i]);
        }else if(c[i]==' '){
            break;
        }
        else{
            printf("stack = %s\n",stack);
            char ch2 = c[i],ch1=pop();
            if((ch1 == '(' && ch2==')') ||
                ch1 == '{' && ch2=='}'||
                ch1 == '[' && ch2==']'){
                    continue;
            }else{
                printf("Invalid String \t i=%d",i);
                count++;
                break;
            }
        }
    }
    if(count==0){
        printf("Your String is valid");
    }
}