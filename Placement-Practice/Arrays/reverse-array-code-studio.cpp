#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v, int m){
    int start = m;
    int end = v.size() -1;
    while (start<end)
    {
        cout<<"start is "<<start<<"and end is "<<end<<endl;
        swap(v[start], v[end]);
        start++;
        end--;

    }
    return v;
}
void printArray(vector<int> a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    v.push_back(11);
    
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    int m = 2;//this is the index from which we have to reverse the array
    vector<int> a = reverse(v,m);
    printArray(a);
    
    return 0;
}