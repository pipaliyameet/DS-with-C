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

void evlPostfix(char prefix[100]){
    int i=strlen(prefix)-1;
    char temp;

    while(i>=0){
        temp = prefix[i--];
        if(isdigit(temp)){
            push(temp-'0');
        }else{
            int operand1 = pop();
            int operand2 = pop();
            int value = solve(operand1 ,operand2 ,temp);
            push(value);
        }
    } 
    printf("answer = %d",pop());   
}

void main(){
    char s[100];
    printf("Enter equation : ");
    scanf("%s",s);
    if(s == '\0'){
        printf("Your string is empty");
    }else{
        evlPostfix(s);
    }
}