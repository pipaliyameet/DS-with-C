#include <stdio.h>
#include <string.h>

void main(){

    char string[100];
    printf("Enter a string  : ");
    scanf("%s",&string);
    int length = strlen(string);

    for(int i=0 ;i<length ;i++){
        if(string[i]==' '){
            continue;
        }else{
            string[i]-=32;
        }
    }
    printf("%s",string);
}