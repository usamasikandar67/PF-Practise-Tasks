#include<stdio.h>
int main(){
    int a ;
    char chck;
    printf("Enter the 'c' for chck  ");
    scanf("%c",&chck);
    switch (chck)
    {
    case 'c':
        printf("Enter the value of a ");
        scanf("%d",&a);
        if (a%2==0)
        {
            printf("Number is Even ");
        }
        else
        printf("Number is odd");
        break;
    
    default:
    printf("Invalid input");
        break;
    }    
    return 0 ;
}