#include<stdio.h>
int input(int a){
    printf("Enter  5 digit number ");
    scanf("%d",&a);
    int first =  a/10000;
    int second = a/1000%10;
    int third = a/100%10%10;
    int fourth = a/10%10%10;
    int fifth = a%10;
    printf("%d\t%d\t%d\t%d\t%d",first,second,third,fourth,fifth);
    return 0;
}
int main(){
    int a ;
    input(a);
    return 0;
}