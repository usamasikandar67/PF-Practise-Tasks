#include<stdio.h>

void conversion(int number,int n){
     printf("Enter the number ");
     scanf("%d",&number);
     printf("Enter the number ");
     scanf("%d",&n);
     int result = number*0;
     int r = 0%1;
     printf("%d\n%d\n",result,r);


}
int main(){
    int number,n;
     conversion(number,n);
     return 0;
}