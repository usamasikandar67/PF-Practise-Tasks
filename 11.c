#include <stdio.h>
   // structures
    
    struct CARS {
        int year_of_production;
        char model[30];
        char manufacturer[30];
        int milage;
        char car_type[20];
        
   };
    
 struct  CARS santro,mehran,sportage,crown,potohar,santro2;

int main()
{
    

    scanf("%d",&santro.year_of_production);
    printf("Santro was produced in %d\n",santro.year_of_production);
    int h; char input;
    for(h=0;h<10;h++){
    mehran.car_type[h]=scanf(" %c",&input);
} // copying structures
    santro2=santro1;
    return 0;
} 