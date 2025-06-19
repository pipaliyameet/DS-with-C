#include <stdio.h>
#include <stdlib.h>

void main(){
    int* a = (int*)malloc(sizeof(a));
    char* c = (char*)malloc(sizeof(c));
    float* f = (float*)malloc(sizeof(f));

    if(a&&c&&f){
        *a=9;
        *c='m';
        *f = 3;

        printf("Intager = %d\n",*a);
        printf("Char = %d\n",*a);
        printf("Float = %d",*a);

        free(a);
        free(c);
        free(f);
    }
}