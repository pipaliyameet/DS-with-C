#include <stdio.h>
#define SIZE 100

int push(int stack[] ,int top){
    int l = sizeof(stack[SIZE])/sizeof(stack[0]);
    if(top == l){
        printf("Stack overflow");
        return top;
    }else{
        top++;
        printf("Enter a value of top : ");
        scanf("%d",&stack[top]);
        return top;
    }
}

int pop(int stack[] ,int top){
    if(top==-1){
        printf("Stack underflow\n");
        return top;
    }else{
        printf("Your element is : %d\n",stack[top]);
        top--;
        return top;
    }
}

int display(int stack[] ,int top){
    if(top==-1){
        printf("Your stack is not avilable\n");
        return top;
    }else{
        for(int count=top ;count>=0 ;count--){
            printf("\nElement = %d\n",stack[count]);
        }
        return top;
    }
}

int peep(int stack[] ,int top ,int index){
    if(top==-1){
        printf("Stack underflow\n");
        return top;
    }else if(top<index){
        printf("Your index is not valid\n");
        return top;
    }else{
        printf("Your %d element value is : %d\n",index,stack[top-index+1]);
        return top;
    }
}

int change(int stack[] ,int top ,int index){
    if(top==-1){
        printf("Stack underflow\n");
        return top;
    }else if(top<index){
        printf("Your index is not valid\n");
        return top;
    }else{
        printf("Enter value who you change : ");
        scanf("%d",&stack[top-index+1]);
        return top;
    }
}

void main(){
    int stack[SIZE];
    int top=-1;
    int temp=0;
    while(1){
        printf("you push element so enter 1 or if you pop element so enter 2 or if you display element so enter 3 or if you peep element so enter 4 or if you change element so enter 5 : ");
        scanf("%d",&temp);
        if(temp==1){
            top = push(stack ,top);
        }else if(temp==2){
            top=pop(stack,top);
        }else if(temp==3){
            top=display(stack,top);        
        }else if(temp==4){
            int index;
            printf("Enter index Who you see : ");
            scanf("%d",&index);
            top = peep(stack,temp,index);
        }else if(temp==5){
            int index;
            printf("Enter index Who you change : ");
            scanf("%d",&index);
            top = peep(stack,temp,index);
        }
        else{
            break;
        }
    }
}