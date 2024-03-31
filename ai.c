#include<stdio.h>
int in(int a ){
    scanf("%d",&a);
    return a;
}
int limt( a , int b ){
    int b ;
    printf("Enter the limit");
    scanf("%d" , &b)  ;
    for (int i = 1; i <= b; i++)
    {
        printf("%d x%d = %d\n",a,i,(a*i));

    }
    return 0;
}
int main(){
    int b = limt(b);
    return 0;
}