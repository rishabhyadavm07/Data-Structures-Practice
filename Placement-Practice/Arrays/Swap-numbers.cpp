#include<iostream>
using namespace std;


int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int firstnum;
    int secondnum;
    cout<<"Enter 1st number:";
    cin>>firstnum;
    cout<<endl<<"Enter 2nd number:";
    cin>>secondnum;
    int firstnumindex;
    int secondnumindex;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == firstnum)
        {
            firstnumindex = i;
            cout<<"Found"<<endl;
        }
        else
        {
            cout<<"1st:Moving to next"<<endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == secondnum)
        {
            secondnumindex = i;
            cout<<"Found"<<endl;

        }
        else
        {
            cout<<"2nd:Moving to next"<<endl;
        }
    }
    int swapint;
    swapint = arr[secondnumindex];
    arr[secondnumindex] = arr[firstnumindex];
    arr[firstnumindex] = swapint;
    cout<<"swapping done"<<endl;
    cout<<endl<<"Printing array."<<endl;
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}