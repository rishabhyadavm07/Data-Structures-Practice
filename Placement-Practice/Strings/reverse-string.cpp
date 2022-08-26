#include<iostream>
using namespace std;
int length(char input[]){
    int count;
    for (int i = 0;input[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char input[]){
    int s;
    int e = (length(input)-1);
    while (s<e)
    {
        swap(input[s],input[e]);
        s++;
        e--;
    }

}
int main(){
    char name[10];
    cin.getline(name,10);
    cout<<"name is :"<<name<<endl;
    cout<<length(name)<<endl;
    reverse(name);
    cout<<"reversed array :";
    cout<<name<<endl;

    return 0;
}