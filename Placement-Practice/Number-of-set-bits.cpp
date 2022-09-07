#include<iostream>
using namespace std;
int dectobinary(int n){
    int set = 0;
    for (int  i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k&1)
        {
            cout<<1;
            set++;
        }
        else{
            cout<<0;
        }
    }
    cout<<endl;
    return set;
}



int main()
{
    int a,b;
    cout<<"Enter the numbers you want the number of set bits of: ";
    cin>>a>>b;
    int set1 = dectobinary(a);
    int set2 = dectobinary(b);
    // cout<<set2;
    cout<<"Total number of set bits are "<<set1+set2<<endl;

    
    
    return 0;
}