#include<iostream>
#include<stack>
#include<string>
using namespace std;

string PrintPostfixexpression(string pst_exp){
    string out;
    for (int i = 0; i < pst_exp.length(); i++)
    {
        cout<<pst_exp[i]<<endl;
        // out = pst_exp[i];
    }
    return out;
}

void Perform(string pst_exp,char qp1,char qp2){
    int int_oprator;
    int_oprator = int(pst_exp);
    int returns = qp1 int_oprator qp2;
    return returns;
}

char PostfixEvaluation(string pst_exp){
    stack <char> S;
    
    for (int i = 0; i < pst_exp.length(); i++)
    {
        if (pst_exp[i] == 1 || pst_exp[i] == 2 ||pst_exp[i] == 3||pst_exp[i] == 4||pst_exp[i] == 5||pst_exp[i] == 6 ||pst_exp[i] == 7||pst_exp[i] == 8||pst_exp[i] == 9||pst_exp[i] == 0)
        {
            S.push(pst_exp[i]);
        }
        else if (pst_exp[i] == "+" || pst_exp[i] == "-" || pst_exp[i] == "*" || pst_exp[i] == "/")
        {
            char qp1,qp2;
            
            qp2 = S.pop();
            qp1 = S.pop();
            char response = Perform(pst_exp[i],qp1,qp2);
            S.push(response);
        }
        
        
    }
    return S.top();


}

int main(){
    string pst_exp;//declaring a string variable to store our postfix expression
    cout<<"Enter the postfix expression you want to evaluate : ";
    cin>>pst_exp;
    PrintPostfixexpression(pst_exp);

    return 0;
}