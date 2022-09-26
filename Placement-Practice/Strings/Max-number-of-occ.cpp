#include<iostream>
using namespace std;
void printArray(int arr[]){
    for (int i = 0; i < 26; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool ifLowercase(char ch){
    if (ch >= 'a' || ch <= 'z')
    {
        return true;
    }
    else{
        return false;
    }
}
bool ifUppercase(char ch){
    if (ch >= 'A' || ch <= 'Z')
    {
        return true;
    }
    else{
        return false;
    }
}
char maxNumberOfOcc(string s){
    int arr[26] = {};
    char ch;
    int number;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        if (ifLowercase(ch))
        {
            number = ch - 'a';
            arr[number]++;
        }
        else if (ifUppercase(ch))
        {
            number = ch - 'A';
            arr[number]++;
        }
        
        
    }
    printArray(arr);

    cout<<"Serching max: "<<endl;
    
    // int start = 0;
    // int end = 25;
    int sum = 0;
    int maxIndex = 0;
    for (int j = 0; j < 25; j++)
    {
        if (arr[j]> sum)
        {
            sum = arr[j];
            maxIndex = j;
        }
        
    }
    char ret = 'a' + maxIndex;
    return ret;
    
    
}

int main()
{
    string mystr = "thisisrishabh";
    cout<<"Max index is : "<<maxNumberOfOcc(mystr)<<endl;
    
    
    
    return 0;
}