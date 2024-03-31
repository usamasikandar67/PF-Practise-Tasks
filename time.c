#include<stdio.h>
void convert(){
     int time_in_hours,time_in_minutes,time_in_second;
     printf("Enter the no of hours ");
     scanf("%d",&time_in_hours);
    time_in_minutes = (time_in_hours*60);
    time_in_second  = (time_in_minutes*60);
    printf("Time in minutes is %d\n",time_in_minutes);
    printf("Time in seconds is %d\n",time_in_second);
}
void hour(){
    int second,min,hours;
    printf("Enter the number of seconds");
    scanf("%d",&second);
    min = second/60;
    hours=min/60;
   printf("Time in hours  is %d",hours);
}

int main(){
     convert();
     hour();
     return 0;

}