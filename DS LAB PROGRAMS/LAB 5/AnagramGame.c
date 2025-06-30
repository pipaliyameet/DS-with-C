#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
#include <string.h> 

void main(){

    int n;
    printf("How many words you enter : ");
    scanf("%d",&n);
    char arr[n][100];

    for(int i=0 ;i<n ;i++){
        printf("Enter a word number %d = ",(i+1));
        scanf("%s",&arr[i]);
    }

    srand(time(0));
    int min = 0;
    int max = n;
    int random_num = (rand() % (max - min) + min);

    printf("Random number: %d\n", random_num);
    printf("And your Word is = %s\n",arr[random_num]);

    char temp[100];
    printf("Enter your word : ");
    scanf("%s",&temp);

    int length = strlen(temp);

    int length2 = strlen(arr[random_num]);      

    int array[length];
    int array2[length2];
    for(int i=0 ;i<length ;i++){
        array[i]=temp[i];
    }

    for(int i=0 ;i<length2 ;i++){
        array2[i]=arr[random_num][i];
    }

    for(int i=0 ;i<length ;i++){
        for(int j=(i+1) ;j<length ;j++){
            if(array[i]>array[j]){
                int temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(int i=0 ;i<length2 ;i++){
        for(int j=(i+1) ;j<length2 ;j++){
            if(array2[i]>array2[j]){
                int temp = array2[i];
                array2[i]=array2[j];
                array2[j]=temp;
            }
        }
    }

    int count=0;
    for(int i=0 ;i<length ;i++){
        if(array[i]==array2[i]){
            continue;
        }else{
            count++;
        }
    }

    if(count==0){
        printf("you are win your %s and random %s is same",temp,arr[random_num]);
    }
}