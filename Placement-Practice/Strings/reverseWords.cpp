#include<iostream>
#include<string>
#include<vector>
using namespace std;
string reverseString(string s){
    string temp = s;
    int start = 0;
    int end = s.length()-1;
    while (start<end)
    {
        swap(temp[start], temp[end]);
        start++;
        end--;
    }
    
    cout<<"temp is : "<<temp<<endl;
    return temp;
}
void reversePrint(string s){
    string str;
    vector<string> temp;
    string str2;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            
            str2 = reverseString(str);
            temp.push_back(str2);
            str = "";
            str2 = "";
        }
        else
        {
            str = str + s[i];
        }
        
        
    }
    temp.push_back(reverseString(str));
    cout<<"Temp size is : "<<temp.size()<<endl;
    // cout<<temp[1];
    for (int j = temp.size()-1; j >= 0; j--)
    {
        // cout<<"Entered loop"<<endl;
        cout<<temp[j]<<" ";
    }
    // cout<<temp[temp.size()]<<endl;
    cout<<endl;
    
}

int main()
{
    string mystr;
    mystr = "my name is rishabh";
    cout<<"string is :"<<mystr<<endl;
    reversePrint(mystr);
    // string test = "rishabh";
    // cout<<test[4]<<endl;
    // string go = reverseString(test);
    // cout<<"Reversed string is : "<<go<<endl;
    
    
    
    
    return 0;
}