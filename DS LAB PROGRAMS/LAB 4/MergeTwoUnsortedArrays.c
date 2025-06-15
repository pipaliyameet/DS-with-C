#include <stdio.h>

void main(){

    int firstArrayLength ,secondArrayLength ;

    printf("Enter a length of first array : ");
    scanf("%d",&firstArrayLength);
    int firstArray[firstArrayLength];
    for(int i=0 ; i<firstArrayLength ; i++){
        printf("Enter a first array element number %d is = ",(i));
        scanf("%d",&firstArray[i]);
    }

    printf("Enter a length of second array : ");
    scanf("%d",&secondArrayLength);
    int secondArray[secondArrayLength];
    for(int i=0 ; i<secondArrayLength ; i++){
        printf("Enter a second array element number %d is = ",(i));
        scanf("%d",&secondArray[i]);
    }

    int finalArrayLength = (firstArrayLength+secondArrayLength);
    int finalArray[finalArrayLength];
    for(int i=0 ;i<finalArrayLength ;i++){
        if(i==firstArrayLength){
            int temp=0;
            for(i ;i<finalArrayLength ;i++){
                finalArray[i]=secondArray[temp];
                temp++;
            }
            break;
        }
        else{
            finalArray[i]=firstArray[i];
        }
    }

    int count=0;
    for(int i=0 ; i<finalArrayLength ; i++){
        for(int j=(i+1) ; j<finalArrayLength ; j++){
            if(finalArray[i]==finalArray[j]){
                count++;
                break;
            }
        }
    }
    int temp=0;
    for(int i=0 ; i<finalArrayLength ; i++){
        int duplicates =0;
        for(int j=0 ; j<temp ; j++){
            if(finalArray[j]==finalArray[i]){
                duplicates=1;
                break;
            }
        }
        if(duplicates==0){
            finalArray[temp]=finalArray[i];
            temp++;
        }
    }

    finalArrayLength=temp;
    for(int j=0 ; j<finalArrayLength ;j++){
        printf("\nElement no %d is = %d",j,finalArray[j]);
    }

    for(int i=0 ;i<temp ;i++){
        for(int j=(i+1) ;j<temp ;j++){
            if(finalArray[i]>finalArray[j]){
                int temp1 =finalArray[i];
                finalArray[i]=finalArray[j];
                finalArray[j]=temp1;
            }
            else{
                finalArray[i]=finalArray[i];
            }
        }
    }
    printf("\nShorted array is ");
    for(int j=0 ; j<temp ;j++){
        printf("\nElement no %d is = %d",j,finalArray[j]);
    }
}