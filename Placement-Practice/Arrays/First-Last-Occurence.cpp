#include<iostream>
using namespace std;
int lastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start+ ((end-start)/2);
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid +1;
        }
        else if (arr[mid]> key)
        {
            end = mid -1;
        }
        else if (arr[mid]<key)
        {
            start = mid +1;
        }
        mid = start+ ((end-start)/2);
    }
    return ans;
}

int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size -1;
    int mid = start+ ((end-start)/2);
    int ans = -1;
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid -1;
        }
        else if (arr[mid]> key)
        {
            end = mid -1;
        }
        else if (arr[mid]<key)
        {
            start = mid +1;
        }
        mid = start+ ((end-start)/2);
    }
    return ans;
}

int main()
{
    int size = 5;
    int key = 2;
    int odd[size] = {0,1,2,2,3};
    cout<<"2's first occurence is on index: "<<firstOccurence(odd,size,key)<<endl;
    cout<<"2's last occurence is on index: "<<lastOccurence(odd,size,key)<<endl;
    
    
    return 0;
}