#include<stdio.h>
int main(){

    int l,k;
    l=0;
    k=1;
    int i =1;
    int j=1;
    /*for(int i = 1; i <= 5; i++)
    {
        for(int j = 0; j <3; j++)
        {
            printf("%d %d ", l, k);
        }
        k += 2;
        l += 2;
        printf("\n");        
    }*/
    while (i <= 5)
    {
        j=1;
        while (j <= 3)
        {
             printf("%d %d ", l,k );
              j++;
       }
        l+=2;
        k+=2;
          i++;
       
        printf("\n");
    }
    
    return 0;
}/*
#include<stdio.h>
2	int main(){
3	     int num=7;
4	   
5	    int i = 1;
6	    while (i<=num)
7	    {
8	      if (i <= 6 )
9	      {
10	        printf("");
11	      }
12	      else 
13	        printf("*");
14	      if(i == num)
15	      {
16	         i = 1; 
17	      }
18	
19	      
20	      i++;
21	      
22	    }
23	    return 0 ;
24	    
25	}
*/
