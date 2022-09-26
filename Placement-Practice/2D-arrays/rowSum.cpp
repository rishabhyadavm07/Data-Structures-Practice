#include<iostream>
using namespace std;
void printRowiseSum(int arr[][4], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum +arr[i][j];
        }
        cout<<"Sum for row index: "<<i<<" is : "<<sum<<endl;
        sum = 0;
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
    printRowiseSum(arr, 3, 4);
    

    
    return 0;
}