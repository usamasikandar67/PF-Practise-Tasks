#include<stdio.h>
void multiply(int num){
    int b =1;
     do
    { 
        printf("%dx%d=%d\n",num,b,num*b);
        b++;

    } while (b<=10);
}
int main(){
    int num ;
    printf("Enter the number ");
    scanf("%d",&num);
    while (num>=1)
    {
        printf("Table of %d is\n ",num);
        multiply(num);
        num--;
        printf("\n");
    }
    return 0;
   
}