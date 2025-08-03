#include <stdio.h>

struct Interval{
    int time1;
    int time2;
};

void main(){
    int i;
    printf("Enter  number of interval : ");
    scanf("%d",&i);
    struct Interval interval[i+i];
    int count=0;
    while(count<i){
        printf("Enter interval %d value of first time : ",(count+1));
        scanf("%d",&interval[count].time1);
        printf("Enter interval %d value of first time : ",(count+1));
        scanf("%d",&interval[count].time2);
        if(interval[count].time1 > interval[count].time2){
            int temp = interval[count].time1;
            interval[count].time1 =interval[count].time2;
            interval[count].time2 =temp;
        }
        count++;
    }

    // int count4=0;
    // while(count4<i){
    //     printf("Enter interval %d value of first time : %d\n",(count4+1),interval[count4].time1);
    //     printf("Enter interval %d value of second time : %d\n",(count4+1),interval[count4].time2);
    //     count4++;
    // }

    int temp1=0;
    int count1=0;
    // int limit =i;
    int temp=count;
    int count2=0;

    while(count1 < (temp-1)){
        interval[count].time1 = interval[count1].time1;
        interval[count].time2 = interval[count1].time2;
        count1++;
        printf("Heyy %d time \n",temp1++);
        count2=0;
        while(count1<temp && (interval[count].time1 < interval[count2].time1 && interval[count].time2 > interval[count2].time1)){
            if(interval[count].time2 > interval[count2].time2){
                interval[count].time2 = interval[count2].time2;
            }else{
                interval[count].time2 = interval[count2].time2;
            }
            count1++;
        }
        printf("Heyy %d time \n",temp1++);
        count++;
        printf("Heyy %d time \n",temp1++);
    }

    int count3=0;
    while(temp<i){
        printf("Enter interval %d value of first time : %d\n",count3,interval[temp].time1);
        printf("Enter interval %d value of second time : %d\n",count3,interval[temp].time2);
        temp++;
        count3++;
    }
}