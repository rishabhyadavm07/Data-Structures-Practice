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
    cout<<endl<<"Finding the smallest number !"<<endl;

    int SMALLEST = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < SMALLEST)
        {
            SMALLEST = arr[i];
        }
        
    }
    cout<<"Smallest number is :"<<SMALLEST<<endl;

    //simple test
    // int a = INT_MIN;
    // int b = INT_MAX;
    // cout<<a<<b<<endl;



    return 0;
}