#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    cout<<"Enter the elements of the array:";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Printing the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing reverse array"<<endl;
    for (int i = n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}