#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralPrint(int arr[][4], int row, int col){
    vector<int> a;
    int count = 0;
    int total = row *  col;

    //index init
    int startingRow = 0;
    int endingRow = row-1;
    int startingCol = 0;
    int endingCol = col-1;

    while (count < total)
    {
        //print starting row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            a.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;
        for (int index = startingRow; count < total && index <=endingRow ; index++)
        {
            a.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;
        for (int index= endingCol; count < total && index >=startingCol; index--)
        {
            a.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;
        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            a.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
        
    }
    return a;
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
    
    vector<int> vecarr = spiralPrint(arr, 3,4);
    cout<<"Vector copy created"<<endl;
    int sizeOfVector = vecarr.size();
    for (int i = 0; i <= sizeOfVector-1; i++)
        {
            cout<<vecarr[i]<<" ";
        }
        cout<<endl;
    return 0;
}