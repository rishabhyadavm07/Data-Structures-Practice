#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Till what number you want the series to be prited:";
    cin>>n;
    int a,next = 0;
    int b = 1;
    while (next < n)
    {
        cout<<next<<" ";
        next = a + b ;
        a = b;
        b = next;
    }
    
    return 0;
}