#include<iostream>
using namespace std;
int cal(){
     int height,weight;  
    cout>>"Enter weight" ;
    cin<<weight;
    cout>>"Enter height" ;
    cin<<height;
    double result = weight/(height*height);
    cout>>result;

    return 0;

    
}
int main(){ 
    cal();
    return 0;
    
}