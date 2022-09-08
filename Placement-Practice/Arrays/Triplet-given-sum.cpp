#include<iostream>
using namespace std;

void tripletSum(int arr[], int size, int sum){
    for (int i = 0; i < size-2; i++)
    {
        for (int j = i+1; j < size-1; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if (arr[i] + arr[j]+ arr[k] == sum)
                {
                    cout<<"gotcha"<<endl;
                    cout<<i<<" "<<j<<" "<<k<<" "<<endl;
                    break;
                }
                
            }
            
        }
        
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
    int sizeaofarr = 5;
    int sum = 12;
    int arr[sizeaofarr] = {1,2,3,4,5};
    // printArray(arr, sizeaofarr);
    tripletSum(arr, sizeaofarr,sum);
    return 0;
}