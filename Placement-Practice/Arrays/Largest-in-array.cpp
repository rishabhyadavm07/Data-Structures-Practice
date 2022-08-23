#include<iostream>
using namespace std;

int main(){
    //init a array named arr with elements 2123,34,6,8,9999,44,2344,3 and get the largest number in output
    int n;

    int arr[8] = {2123,34,6,8,9999,44,2344,3};

    int lrgst = 0;

    for (int i = 0; i < 8; i++)
    {
        if (lrgst <= arr[i] )
        {
            cout<<"Found a larger number. Updating variable."<<endl;
            lrgst = arr[i];
        }
        else
        {
            cout<<"moving to next number"<<endl;
        }
        
        
    }
    
    cout<<"Found the largest number = "<<lrgst<<endl;

    return 0;
}