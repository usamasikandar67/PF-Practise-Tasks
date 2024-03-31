#include<stdio.h>
int main()
{
     int num;
     printf("ENTER THE SIZE OF AN ARRAY "); 
     scanf("%d",&num ); 

     char arr[num]; 
    for (int i = 0 ; i<num ; i++){ 
        printf("ENTER YOUR NAME ");
        scanf("%c",&arr[i]);
    }
     for(int i = 0;i<num;i++ )
     {
         printf("%c",arr[i]);

     }
     return 0 ;

}