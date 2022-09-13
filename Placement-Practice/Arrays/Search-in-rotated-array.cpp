#include<iostream>
using namespace std;
// int findPivot(int arr[], int size){
//     int start = 0;
//     int end = size -1;
//     int mid = start + (end-start)/2;
//     while (start<end)
//     {
//         if (arr[mid]>arr[0])
//         {
//             start = mid +1;
//         }
//         else if (arr[mid]<=arr[mid+1])
//         {
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return mid;
// }
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
            end = mid;

        }
        mid = start + ((end-start)/2);
    }
    
    return mid;


}

bool findElement(int arr[], int size, int key){
    int start ,end, mid;
    start = 0;
    end = size -1;
    
    int pivot = findPivot(arr, size);
    cout<<"Pivot is "<<pivot<<endl;
    if (arr[pivot]<=key && key<=arr[end])
    {
        start = pivot;
    }
    else if (arr[pivot<=key && key<=arr[start]])
    {
        end = pivot-1;
    }
    mid = start + (end-start)/2;
    cout<<"Start is :"<<start<<"and end is :"<<end<<"mid is :"<<mid<<endl;
    
    while (start<end)
    {
        if (arr[mid] == key)
        {
            return true;
            break;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid -1;
        }

        mid = start + (end-start)/2;
        cout<<"mid is "<<mid<<endl;
    }
    return false;

}
int main()
{
    int sizeofarr = 10;
    int arr[sizeofarr] = {5,6,7,8,9,0,1,2,3,4};
    int key = 8;
    cout<<"finding element: "<<findElement(arr, sizeofarr, key)<<endl;
    
    
    return 0;
}