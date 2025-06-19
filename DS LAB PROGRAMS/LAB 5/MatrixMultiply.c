#include <stdio.h>

void main(){

    int firstArray[3][2];
    int secondArray[2][3];
    int finalArray[3][3];

    printf("Enter first array element \n");
    for(int i=0 ; i<3 ;i++){
        for(int j=0 ;j<2 ;j++){
            printf("Enter a element no [%d][%d] is =",i,j);
            scanf("%d",&firstArray[i][j]);
        }
    }

    printf("Enter second array element \n");
    for(int i=0 ; i<2 ;i++){
        for(int j=0 ;j<3 ;j++){
            printf("Enter a element no [%d][%d] is =",i,j);
            scanf("%d",&secondArray[i][j]);
        }
    }

    for(int i=0 ;i<3 ;i++){
        for(int j=0 ;j<3 ;j++){
            finalArray[i][j]=0;
            for(int k=0 ;k<2 ;k++){
                finalArray[i][j] += (firstArray[i][k]*secondArray[k][j]);
            }
        }
    }

    for(int i=0 ; i<3 ;i++){
        for(int j=0 ;j<3 ;j++){
            printf("\nfinal array element no [%d][%d] is = %d",i,j,finalArray[i][j]);
        }
    }
}