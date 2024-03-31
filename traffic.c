#include<stdio.h>
int display(){
     printf("*//////////////////////WElCOME TO TRAFFIC LIGHT SYSTEM /////////////////////////////////////////* \n ");
    printf(" 1: RED \n 2: YELLOW \n 3 : GREEN \n ");
}

int fun(){ 
   char value;
     printf("Enter r for Red OR y for YELLOW OR g for GREEN ");
     scanf(" %c",&value);
     switch (value)
     {
     case 'r':
       printf("NEXT Light COLOUR IS YELLOW GREEN");
        break;
        case 'y' :
       printf("NEXT Light COLOUR IS GREEN OR RED ");
        break;
        case 'g':
       printf("NEXT Light COLOUR IS YELLOW RED ");
        break;
     default:
     printf("Invlaid input ");
        break;
     } 

}
int main(){
    display();
    fun();
  
    return 0; 

}