#include<iostream>
using namespace std;
int secondlargest(int arr[], int n){
    if(n<2) return -1;

	int mx1 = INT_MIN, mx2 = INT_MIN;

	for(int i=0;i<n;i++){
	    if(arr[i] > mx1){
	        mx2 = mx1;
	        mx1 = arr[i];
	    }
	    else if(arr[i] > mx2 and arr[i] != mx1){
	        mx2 = arr[i];
	    }
	}

	return mx2 == INT_MIN ? -1 : mx2;
}
int main(){
    int arr[10] = {1,7,4,9,3,10,6};
    int n = 7;
    int sec = secondlargest(arr,n);
    cout<<sec;


    return 0;
}