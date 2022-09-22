#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void rotateArray(int arr[], int size, int key){
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    
    key = key%size;
    for (int i = 0; i < size; i++)
    {
        arr[(i+key)%size] = temp[i];
    }

}
int main()
{
    int sizeofarr = 5;
    int key = 2;
    int arr[sizeofarr] = {2,4,6,8,9};

    printArray(arr, sizeofarr);
    rotateArray(arr, sizeofarr, key);
    printArray(arr, sizeofarr);
    
    
    return 0;
}