#include<stdio.h>
int main(){
     int rows,col;
     printf("Enter the number of rows ");
     scanf("%d",&rows);
     int i = 1;
    col = rows ;
    while (i <= rows* col)
    {
    
          if (i <= col || i > (rows - 1) * col || i % col == 1 || i % col == 0)
        {
          printf("*");
         }
         else
          {
            printf(" ");
          }
          if (i%col==0)
          {
           printf("\n");
          }
          
            i++;
        }
    return 0;
     
}