#include<iostream>
using namespace std;

int main(){
    //create and find the sum of the following array = arr[45,67,23,78,334,87,23,78,4,0,99]
    int arr[11] = {45,67,23,78,334,87,23,78,4,0,99};
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum = sum + arr[i];

    }
    cout<<"The sum of the given array is = "<<sum<<endl;
    return 0;
}