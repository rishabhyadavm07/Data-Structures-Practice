#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void swapAlternate(int arr[], int size){

    int a = 0;
    int b = 1;
    while (a<size)
    {
        swap(arr[a], arr[b]);
        a = a+2;
        b = b+2;
    }
    
    
}

int main()
{
    int sizeofarr = 6;
    int arr[sizeofarr] = {1,2,3,4,5,6};
    cout<<"BEFORE"<<endl;
    PrintArray(arr,sizeofarr);
    cout<<"AFTER"<<endl;
    swapAlternate(arr,sizeofarr);   
    PrintArray(arr, sizeofarr);
    
    
    return 0;
}