#include<stdio.h>
#include<math.h>
#define max 100
int arr[max];
int b[max];

void merge(int low ,int mid , int high ){
    int h,i,j,k;
    h=low;
    i=low;
    j=mid+1;
    while(h<=mid && j <=high){
        if(arr[h]<=arr[j]){
            b[i]=arr[h];
            h++;
        }else{
            b[i]=arr[j];
            j++;
        }
        i++;
    }

    while (h <= mid) {
        b[i] = arr[h];
        h++;
        i++;
    }

    while (j <= high) {
        b[i] = arr[j];
        j++;
        i++;
    }

    for(k=low ; k<=high ;k++){
        arr[k]=b[k];
    }
}

void mergesort(int low , int high){
    int arr[high];
    if(low<high){
        int mid = floor((low+high)/2);
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}

void main(){
    int n;
    printf("Enter a length : ");
    scanf("%d",&n);

    for(int i=0 ;i<n ; i++){
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }

    mergesort(0,n-1);

    for(int i=0 ;i<n ; i++){
        printf("your element %d : %d\n",i,arr[i]);
    }
}