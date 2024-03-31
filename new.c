#include<stdio.h>
int fun(){
     int number;
     printf("ENTER THE NUMBER OF DAY");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
    printf("Day %d is MONDAY");
        break;
            case 2:
    printf("Day %d isTuesday");
        break;
            case 3:
    printf("Day %d is wednesday");
        break;
            case 4:
    printf("Day %d is thursday");
        break;
            case 5:
    printf("Day %d is Friday");
        break;
            case 6:
    printf("Day %d is SAturday ");
        break;
            case 7:
    printf("Day %d  is Sunday");
        break;
    
    default:
    printf("Invalid input ");

        break;
    }
}
int main()
{
     fun();
     return 0;
}