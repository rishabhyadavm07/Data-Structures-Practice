#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool checkbalancedperanthesis(string exp){
    int n;
    n = exp.length();
    cout<<n;
    stack <char> S;
    for (int i = 0; i < n-1; i++)
    {
       if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
       {
           S.push(exp[i]);
       }
       else if (exp[i] == ']' || exp[i] == ')' || exp[i] == '}')
       {
           if (S.empty() || S.top() != exp[i])
            {
                return false;
            }
            else
            {
                S.pop();
            }
            
            
        }
    }
    // return (S.empty());
    return S.empty() ? true:false;


}

int main(){
    string exp;
    cout<<"Enter the expression you want to test for balanced experessions: ";
    cin>>exp;
    string i;
    i = checkbalancedperanthesis(exp);
    cout<<i;
    cout<<endl;
    cout<<exp;
}
