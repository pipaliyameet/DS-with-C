#include <stdio.h>

void main(){

    int firstArray[2][2];
    int secondArray[2][2];
    int finalArray[2][2];

    printf("Enter first array element \n");
    for(int i=0 ; i<2 ;i++){
        for(int j=0 ;j<2 ;j++){
            printf("Enter a element no [%d][%d] is =",i,j);
            scanf("%d",&firstArray[i][j]);
        }
    }

    printf("Enter second array element \n");
    for(int i=0 ; i<2 ;i++){
        for(int j=0 ;j<2 ;j++){
            printf("Enter a element no [%d][%d] is =",i,j);
            scanf("%d",&secondArray[i][j]);
        }
    }

    for(int i=0 ;i<2 ;i++){
        for(int j=0 ;j<2 ;j++){
            finalArray[i][j] = (firstArray[i][j] + secondArray[i][j]);
        }
    }

    for(int i=0 ; i<2 ;i++){
        for(int j=0 ;j<2 ;j++){
            printf("\nEnter a element no [%d][%d] is = %d",i,j,finalArray[i][j]);
        }
    }
}