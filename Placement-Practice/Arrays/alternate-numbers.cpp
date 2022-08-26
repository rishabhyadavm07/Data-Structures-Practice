#include<iostream>
using namespace std;
void alter(int ar[], int n){
    for (int i = 0; i < n; i=i+2)
    {
        cout<<ar[i]<<" ";
    }
    
}
int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int num = 10;
    alter(a,num);
    return 0;
}