#include<iostream>
using namespace std;
int peakIndex(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid = start + ((end-start)/2);
    while (start<end)
    {
        if (arr[mid]<arr[mid+1])
    {
        start = mid +1;

    }
    else
    {
        end = mid;
    }
    mid = start + ((end-start)/2);
    }
    return mid;
    
}
int main()
{
    int size = 7;
    int arr[size] = {1,2,4,6,8,6,3};
    cout<<"Peak index is: "<<peakIndex(arr,size)<<" which has a value of " <<arr[peakIndex(arr,size)]<<endl;
    
    
    
    
    return 0;
}