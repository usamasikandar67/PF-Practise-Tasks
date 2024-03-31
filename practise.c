#include<stdio.h>

int main(){
    int num ;
    printf("Enter the number ");
    scanf("%d",&num);
   do
    {
        printf("Table of %d is\n ",num);
        int b =1;
     do
    { 
        printf("%dx%d=%d\n",num,b,num*b);
        b++;

    } while (b<=10);
        num--;
        printf("\n");
    }
     while (num>=1);
    return 0;
   
}