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
        if(c[i]=='c'){
            count++;
            break;
        }
        push(c[i]);
        count++;
    }

    int count1=0 ,count2=0;
    for(count ;count<strlen(c) ;count++){
        if(c[count]==pop()){
            count2++;
            continue;
        }else{
            count1++;
            break;
        }
    }if(count1==0 && count2==strlen(stack)){
        printf("Valid string");
    }else{
        
        printf("Invalid string");
    }
}