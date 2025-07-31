#include <stdio.h>
#include<string.h>

char stack[100];
int top = -1;

void push(char c){
    stack[++top]=c;
}
char pop(){
    return stack[top--];
}

int stackPrecidence(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 3;
    }else if(x=='^'){
        return 6;
    }else if(x=='('){
        return 0;
    }else{
        return 8;
    }
}

int infixPrecidence(char x){
    if(x=='+' || x=='-'){
        return 2;
    }else if(x=='*' || x=='/'){
        return 4;
    }else if(x=='^'){
        return 5;
    }else if(x=='('){
        return 9;
    }else if(x==')'){
        return 0;
    }else{
        return 7;
    }
}

int rankOf(char c){
    if(c== '+' || c== '-' || c== '*' || c== '/' || c== '^'){
        return -1;
    }
    else if(c =='(' || c==')'){
        return 0;
    } 
    else{
        return 1;
    }
}

void REVPOL(char infix[100]){
    push('(');
    strcat(infix, ")");
    char polish[100]={0};
    int rank=0;
    int count1=0 ,count2=0 ,j=0;
    char next = infix[j];
    printf("%c",next);
    while (next != '\0')
    {
        if(top<0){
            printf("Invalid String");
            break;
        }
        // printf("heloo from %d time \n",count1++);
        while(stackPrecidence(stack[top])>infixPrecidence(next)){
            char temp = pop();
            strncat(polish, &temp, 1); 
            rank += rankOf(temp);
            if (rank < 0) {
                printf("Invalid String: Rank < 0 during processing\n");
                return;
            }
        }
        if(stackPrecidence(stack[top]) != infixPrecidence(next)){
            push(next);
        }else{
            pop();
        }
        next = infix[++j];
    }
    if(top==-1 && rank!=1){
        printf("Invalid\n");
    }else{
        char rev[100]={0};
        int j=strlen(polish)-1;
        for(int i=0 ;i<strlen(polish) ;i++){
            if(polish[j] =='('){
                rev[i]=')';
            }else if(polish[j] ==')'){
                rev[i]='(';
            }else{
            rev[i]=polish[j];
            }
            // printf("%c\t",s[j]);
            j--;
        }
        printf("\nValid string is = %s",rev);
    }
}

void main(){
    char s[100];
    printf("Enter Your Eqation : ");
    scanf("%s",s);
    char rev[100]={0};
    int j=strlen(s)-1;
    for(int i=0 ;i<strlen(s) ;i++){
        if(s[j] =='('){
            rev[i]=')';
        }else if(s[j] ==')'){
            rev[i]='(';
        }else{
        rev[i]=s[j];
        }
        j--;
    }
    printf("Reverse string = %s",rev);
    REVPOL(rev);
}