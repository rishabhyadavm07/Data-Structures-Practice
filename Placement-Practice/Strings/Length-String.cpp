#include<iostream>
using namespace std;

int length(char input[]){
    int count = 0;
    for (int i = 0; input[i]!= '\0'; i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter the name:";
    cin>>name;

    cout<<"name is :"<<name<<endl;
    cout<<"Length is "<<length(name)<<endl;




    return 0;
}