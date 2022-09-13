#include<iostream>
using namespace std;
int findPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + ((end-start)/2);
    while (start<end)
    {
        if (arr[mid]>arr[0])
        {
            start = mid +1;
        }
        else if (arr[mid]<=arr[mid+1])
        {
            end = mid -1 ;

        }
        mid = start + ((end-start)/2);
    }
    
    return mid;


}
int main()
{
    int sizeofarr = 10;
    int arr[sizeofarr] = {5,6,7,8,9,0,1,2,3,4};
    cout<<"Pivot is :"<<findPivot(arr, sizeofarr)<<endl;
    
    
    return 0;
}