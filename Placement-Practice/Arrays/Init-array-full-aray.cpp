#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number to be initialised at all indexes: ";
    int n;
    cin>>n;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n;
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}