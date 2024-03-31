#include<stdio.h>
int main (){
     
     char per; 
     int sum_permananet=0;
     int sum_contract=0;
     int employ=0;
     int hours;
     int total_salary;
     int total_salary2;
    
     while(employ <=10 ){
        if (employ == 10)
        {
            break;
        }
        
         printf("Enter 'p' for permanent and 'c' for contract: ");
         scanf(" %c",&per);
         if (per == 'p') {
             printf("\nEnter the hours of work: ");
             scanf("%d",&hours);
             if (hours > 40) {
                hours=hours-40;
                 total_salary = 150 * hours;
                 printf("TOTAL Salary is %d\n", total_salary);
             } else {
                 printf("You did work within the limit of 40 hours\n");
             }
             sum_permananet++;
         } else if (per == 'c') {
             printf("Enter the hours of work: ");
             scanf("%d",&hours);
             if (hours > 40) {
                hours=hours-40;
                 total_salary2 = 100 * hours;
                 printf("TOTAL Salary is %d\n", total_salary2);
             } else {
                 printf("You did work within 40 hours\n");
             }
             sum_contract++;
         } else {
             printf("Wrong input\n");
         }
         employ++;
     }
     printf("Total permanent employees: %d\n", sum_permananet);
     printf("Total contract employees: %d\n", sum_contract);
     return 0;
}
