#include<iostream>
using namespace std;
int NthTerm(int a, int b, int n){
    int d;
    d = b-a;
    int nth = a + (n - 1) * d;



    return nth;
}


int main()
{
    int a,b,n;
    cout<<"Enter the first and second term of the AP: ";
    cin>>a>>b;

    cout<<"Enter the position of term you want: ";
    cin>>n;

    int nth = NthTerm(a,b,n);
    cout<<"The term is :"<<nth<<endl;
    
    
    return 0;
}