#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    //getting input and putting values
    cout<<"Enter the values: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    //Printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int transpose[3][3];
    //init transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        
    }
    cout<<"Transpose 1 : "<<endl;
    //Printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int transpose2[3][3];
    //init transpose
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose2[j][i] = transpose[i][j];
        }
        
    }
    cout<<"Transpose 2 : "<<endl;
    //Printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<transpose2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}