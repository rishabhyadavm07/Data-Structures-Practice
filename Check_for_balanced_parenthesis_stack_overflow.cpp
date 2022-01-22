#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkbalancedperanthesis(string exp) {
    int n = exp.length();
    //cout << n;
    stack <char> S;
    // CHANGE HERE
    for (int i = 0; i < n; i++)
    {
        if (exp[i] == '[' || exp[i] == '(' || exp[i] == '{')
        {
            S.push(exp[i]);
        }
        else if (exp[i] == ']' || exp[i] == ')' || exp[i] == '}')
        {
            // CHANGE HERE
            char top_val = S.top();
            S.pop();
            if ((top_val == '(' && exp[i] == ')')
                || (top_val == '[' && exp[i] == ']')
                || (top_val == '{' && exp[i] == '}'))
            {
                // do nothing
            }
            else
            {
                return false;
            }

        }
    }
    return S.empty();
}

int main() {
    string exp;
    cout << "Enter the expression you want to test for balanced experessions:\n";
    //cin>>exp;
    exp = "[[(){}]]";
    cout << exp << " " << checkbalancedperanthesis(exp) << endl;
    exp = "[[({}]]";
    cout << exp << " " << checkbalancedperanthesis(exp) << endl;
}