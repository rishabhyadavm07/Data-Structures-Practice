#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the temprature in F:";
    float f;
    cin>>f;
    float c;
    //(100°F − 32) × 5/9 = 37.778°C
    f = f - 32;
    f= f * 0.55555555555;
    cout<<"Temprature is "<<f<<"C"<<endl;
    
    
    
    return 0;
}