#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){

    for (int i = 0; i < size-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[i]);
    }
    

}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int sizeofarr = 10;
    int arr[sizeofarr] ={9,1,8,2,7,3,6,4,5,0} ;
    printArray(arr,sizeofarr);
    cout<<endl;
    selectionSort(arr, sizeofarr);
    cout<<endl;
    printArray(arr, sizeofarr);
    
    
    return 0;
}