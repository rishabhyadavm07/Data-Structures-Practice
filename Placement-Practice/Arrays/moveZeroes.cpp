#include<iostream>
using namespace std;
void moveZeroes(int arr[], int size){
    int i = 0;
    int j=0;
    while (j<size)
    {
        if (arr[j] != 0 )
        {
            swap(arr[j], arr[i]);
            i++;
        }
        j++;
    }
    
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size = 6;
    int arr[size] = {0,1,0,3,12,0};
    moveZeroes(arr, size);
    printArray(arr,size);
    
    
    
    return 0;
}