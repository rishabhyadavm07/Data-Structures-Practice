#include<iostream>
#include<stack>
#include<string>

using namespace std;

int evaluate(string expression);

bool Isdigit(char c);

bool IsOprator(char c);

int performcalc(char opration,int op2,int op1);

int main(){
    string expression;
    cout<<"Start of the program ! "<<endl;
    cout<<"Enter a postfix expression to evaluate: ";
    // cin>>expression;
    getline(cin,expression);
    int result = evaluate(expression);
    cout<<"Result ="<<result<<endl;
    cout<<"End of the program !!";
    return 0;
}

int evaluate(string expression){
    stack <int> S;
    
    for (int i = 0; i < expression.length(); i++)
    {
        if (expression[i] == ' ' || expression[i] == ',')
        {
            continue;
        }
        else if (Isdigit(expression[i]))
        {
            // int a = stoi(expression[i]);
            // S.push(a);
            // Extract the numeric operand from the string
			// Keep incrementing i as long as you are getting a numeric digit. 
			int operand = 0; 
			while(i<expression.length() && Isdigit(expression[i])) {
				// For a number with more than one digits, as we are scanning from left to right. 
				// Everytime , we get a digit towards right, we can multiply current total in operand by 10 
				// and add the new digit. 
				operand = (operand*10) + (expression[i] - '0'); 
				i++;
			}
			// Finally, you will come out of while loop with i set to a non-numeric character or end of string
			// decrement i because it will be incremented in increment section of loop once again. 
			// We do not want to skip the non-numeric character by incrementing i twice. 
			i--;

			// Push operand on stack. 
			S.push(operand);
        }
        
        else if (IsOprator(expression[i]))
        {
            int op2 = S.top(); S.pop();
            int op1 = S.top(); S.pop();
            int result = performcalc(expression[i],op2,op1);
            S.push(result);
        }
    }
    return S.top();
}

bool Isdigit(char c){
    if (c >= '0' && c<='9')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool IsOprator(char c){
    if (c == '+' || c == '*' || c == '/' || c == '-' )
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int performcalc(char opration,int op2,int op1){
    if (opration == '+')
    {
        return op1 + op2;
    }
    else if (opration == '-')
    {
        return op1 - op2;
    }
    else if (opration == '*')
    {
        return op1 * op2;
    }
    else if (opration == '/')
    {
        return op1 / op2;
    }
    else{
        cout<<"error"<<endl;
    }
    return -1;
}