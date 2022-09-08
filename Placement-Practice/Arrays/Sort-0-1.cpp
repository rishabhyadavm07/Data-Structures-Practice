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
    printArray(arr, size);
    int i = 0;
    int j = size - 1;
    while (i<j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else if (arr[i] == 1 || arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
            // cout<<"lom";
        }
        // cout<<"aaa"<<" ";
    }
    printArray(arr, size);
}

int main()
{
    int sizeofarr = 6;
    int arr[sizeofarr] = {1,1,1,1,1,0};
    // printArray(arr,sizeofarr);
    sortArray(arr, sizeofarr);    
    
    
    return 0;
}