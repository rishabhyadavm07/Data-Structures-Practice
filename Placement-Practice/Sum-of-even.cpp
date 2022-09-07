#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number till which tou want to perform this opration: ";
    cin>>n;
    int count = 0;
    int sum;
    while (count < n)
    {
        sum = sum + count;
        count = count + 2;
    }
    cout<<"The sum is :"<<sum<<endl;
    
    
    
    return 0;
}