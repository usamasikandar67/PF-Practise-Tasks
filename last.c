#include<stdio.h>
int main(){
    int num,score,total_score;
  printf("Enter the number of students ");
  scanf("%d",&num);
  for (int i = 0; i < num; i++)
  {
    printf("Enter the score ");
     scanf("%d",&score);
     total_score =+ score ;
     if (score >=90 && score<100)
     {
        printf("Your grade is A\n");
     }
    else if (score >=80 && score<90)
     {
        printf("Your grade is B\n");
     }
      else if (score >=70 && score<80)
     {
        printf("Your grade is C\n");
     }
      else if (score >=60 && score<70)
     {
        printf("Your grade is D\n");
     } 
     else {
        printf("Your grade is F\n");
     }
      
  }
     float average =total_score/num;
     printf("Average is %.2f",average);  
   return 0;


}