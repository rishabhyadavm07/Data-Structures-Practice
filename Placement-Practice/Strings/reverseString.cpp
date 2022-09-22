#include<iostream>
#include<string>
#include<vector>
using namespace std;
void reversePrint(string s){
    string str;
    vector<string> temp;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back(str);
            str = "";
        }
        else
        {
            str = str + s[i];
        }
        
        
    }
    temp.push_back(str);
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
    
    
    
    
    return 0;
}