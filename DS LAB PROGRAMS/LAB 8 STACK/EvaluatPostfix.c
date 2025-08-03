#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int stack[100];
int top=-1;

void push(char c){
    stack[++top]=c;
}

int pop(){
    return stack[top--];
}

int solve(int a ,int b , char operator){
    switch (operator)
    {
    case '+':
        return a+b;
        break;
    
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '^':
        return (int)pow(a,b);
        break;
    }
}

void evlPostfix(char postfix[100]){
    int i=0;
    char temp = postfix[i];
    while(temp != '\0'){
        if(isdigit(temp)){
            push(temp-'0');
        }else{
            int operand2 = pop();
            int operand1 = pop();
            int value = solve(operand1 ,operand2 ,temp);
            push(value);
        }
        temp = postfix[++i];
    } 
    printf("answer = %d",pop());   
}

void main(){
    char s[100];
    printf("Enter equation : ");
    scanf("%s",s);

    evlPostfix(s);
}