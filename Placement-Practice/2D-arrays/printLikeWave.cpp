#include<iostream>
using namespace std;
void printWaves(int arr[][4], int row, int col){
    for (int i = 0; i < col; i++)
    {
        if (i&1)
        {
            //odd case
            cout<<"If case"<<endl;
            for (int j = row-1; j >= 0; j--)
            {
                cout<<arr[j][i]<<" ";
                // cout<<"Up";
            }
            
        }
        else
        {
            //even case
            cout<<"Else case"<<endl;
            for (int j = 0; j < row; j++)
            {
                cout<<arr[j][i]<<" ";
                // cout<<"down";
            }
            
        }
        
        cout<<endl;
    }
    
}
int main()
{
    int arr[3][4];
    //getting input and putting values
    cout<<"Enter the values: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    
    
    //Printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    printWaves(arr, 3, 4);
    
    return 0;
}