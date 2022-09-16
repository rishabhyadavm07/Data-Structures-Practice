#include<iostream>
using namespace std;
void mergeArray(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    int rdIndex = 0;
    int i=0;
    int j=0;
    while (i<size1 && j<size2)
    {
        if (arr1[i]<arr2[j])
        {
            arr3[rdIndex] = arr1[i];
            rdIndex++;
            i++;
        }
        else{
            arr3[rdIndex] = arr2[j];
            rdIndex++;
            j++;
        }
        
    }
    while (i<size1)
    {
        arr3[rdIndex] = arr1[i];
        rdIndex++;
        i++;
    }
    while (j<size2)
    {
        arr3[rdIndex] = arr2[j];
        rdIndex++;
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
    int sizeof1 = 5;
    int sizeof2 = 3;
    int sizeof3 = sizeof1+sizeof2;
    
    int arr1[sizeof1] = {1,3,5,7,9};
    int arr2[sizeof2] = {2,4,6};
    int arr3[sizeof3] = {};

    mergeArray(arr1, sizeof1, arr2, sizeof2, arr3);
    printArray(arr3, sizeof3);
    return 0;
}