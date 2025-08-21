#include<Stdio.h>

void main(){
    int a;
    printf("len = ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("%d element = ",i);
        scanf("%d",&arr[i]);
    }

    int i=0,j=0;

    while(i<a){
        if(j<a){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }else{
            i++;
            j=i;
        }
    }

    printf("*Sorted array*\n");

    for(int i=0;i<a;i++){
        printf("%d elemtnt = %d \n",i,arr[i]);
    }

}