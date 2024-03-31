#include<stdio.h>
#include<stdlib.h>
int data(){
    char a,b,c,d;
    printf("Enter your name ");
    scanf(" %c",a);
    scanf(" %c",b);
    scanf(" %c",c);
    scanf(" %c",d);
    int sum = a + b + c + d ;
    
    if (sum >0 && sum <=128  )
    {
        printf("%d",sum);
        int  average = sum /4;
        printf("%c",average);
    }
    else 
       printf("%d",sum);
    return 0 ;
    
}
int main(){
     data();
     return 0;
}
