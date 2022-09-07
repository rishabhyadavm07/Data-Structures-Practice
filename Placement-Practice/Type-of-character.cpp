#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a character:";
    char character;
    cin>>character;
    if (character>='A' && character<='Z')
    {
        cout<<"Uppercase"<<endl;
    }
    else if (character>='a' && character<='z')
    {
        cout<<"Lowercase"<<endl;
    }
    else if (character>='0' && character<='9')
    {
        cout<<"Digit"<<endl;
    }
    else
    {
        cout<<"Special character"<<endl;
    }
    return 0;
}