#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int roll_no;
    int bach_no;
    char name[100];
    char branch[100];
};

void main(){
    struct Student  s1;
    s1.roll_no =22 ;
    s1.bach_no =22 ;
    strcpy(s1.name ,"meet") ;
    strcpy(s1.branch ,"CSE") ;

    printf(" Name = %s \n roll no. = %d \n branch name = %s \n bach no = %d",s1.name,s1.roll_no,s1.branch,s1.bach_no);
}