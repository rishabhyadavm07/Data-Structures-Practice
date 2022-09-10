#include<iostream>
using namespace std;
void printArray(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortArray(int arr[], int size){

    // int low, mid, high;
    int low = 0;
    int mid = 0;
    int high = size-1;
    // low, mid = 0;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        
    }
    printArray(arr,size);
}
int main()
{
    int sizeofarr = 10;
    int arr[sizeofarr] = {0,1,2,1,1,0,0,0,2,0};
    printArray(arr, sizeofarr);
    sortArray(arr,sizeofarr);
    
    
    return 0;
}