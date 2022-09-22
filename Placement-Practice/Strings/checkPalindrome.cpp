#include<iostream>
#include<string>
using namespace std;
bool validChar(char i){
    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= '0' && i <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}
char toLowercase(char c){
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
    {
        return c;
    }
    else
    {
        char ch = ch - 'A' + 'a';
        return ch;
    }
    
    
}

bool checkPalindrome(string a){
    int s = 0;
    int e = a.length()-1;

    while (s>e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        
    }
    
    return 1;
}

bool isPalindrome(string s){
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (validChar(s[i]))
        {
            temp.push_back(s[i]);

        }
        
    }

    for (int i = 0; i < s.length(); i++)
    {
        temp[i] = toLowercase(temp[i]);

    }
    
    return checkPalindrome(temp);
    


}
int main()
{
    string mystr = "abcba";
    cout<<"String is "<<mystr<<endl;
    cout<<checkPalindrome(mystr)<<endl;

    
    return 0;
}