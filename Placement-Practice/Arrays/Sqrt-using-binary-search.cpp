#include<iostream>
using namespace std;
int findSqrt(int arr[], int size, int num){
    int start = 0;
    int end = size-1;
    int mid = start+ (end-start)/2;
    while (start<end)
    {
        if (mid * mid > num)
        {
            end = mid -1;
        }
        else if (mid * mid < num)
        {
            start = mid +1;
        }
        else if (mid * mid == num)
        {
            return mid;
        }
        mid = start + (end-start)/2;
        
    }
    return 0;
}

int main()
{
    int sizeofarr = 37;
    int arr[sizeofarr];
    for (int i = 0; i < sizeofarr; i++)
    {
        arr[i] = i;
    }
    
    // int arr[sizeofarr] = {0,1,2,3,4,5,6,7,8,9,10};
    int key = 36;
    cout<<"Sqrt of "<<key<<" is : "<<findSqrt(arr, sizeofarr, key)<<" "<<endl;
    
    
    
    
    return 0;
}