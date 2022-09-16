#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[], int size){
    int end = size-1;
    for (int i = 1; i <= size; i++)
    {
        //rounds
        for (int j = 0; j < size -i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                cout<<"swapped"<<endl;
            }
            
        }
        cout<<"i incresed"<<endl;
        printArray(arr,size);
    }
    
}

int main()
{
    int sizeofarr = 10;
    int arr[sizeofarr] = {10,3,6,7,2,8,4,9,0,1};
    printArray(arr, sizeofarr);

    bubbleSort(arr,sizeofarr);
    printArray(arr, sizeofarr);
    
    
    
    
    
    
    return 0;
}