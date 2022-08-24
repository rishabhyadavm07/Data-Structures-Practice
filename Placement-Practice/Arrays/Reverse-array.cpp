#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the normal array:";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Reversing the array"<<endl;
    int revarr[n];
    int revarrindex = n - 1;
    for (int i = 0; i < n; i++)
    {
        revarr[revarrindex] = arr[i];
        revarrindex--;
    }
    cout<<"Printing the reversed array:";
    for (int i = 0; i < n; i++)
    {
        cout<<revarr[i]<<" ";
    }
    return 0;
}