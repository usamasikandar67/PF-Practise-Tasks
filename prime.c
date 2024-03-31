#include<stdio.h>
int prime(int number,int count){
     printf("Enter the number ");
     scanf("%d",&number);
     for (int j = 1; j <=number; j++)
     {   
         count=0;
           for (int i = 1; i<=number; i++)
     {
            if (j%i==0)
            {
            count++;
           }
          }
           if (count == 2)
           { 
           printf("%d ",j);
            }
     }
      
     return 0;
}
int main(){
     int number,count=0;
     prime(number,count);
     return 0;

}