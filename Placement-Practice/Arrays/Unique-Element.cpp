#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;


}
int findUnique(int arr[], int size){
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        unique = unique ^ arr[i];
    }
    



    return unique;
}

int main()
{
    int sizeofarr = 9;
    int arr[sizeofarr] = {2,3,1,1,6,6,3,6,2};
    printArray(arr, sizeofarr);
    int uni = findUnique(arr,sizeofarr);
    cout<<"Unique is "<<uni<<endl;
    
    
    
    return 0;
}