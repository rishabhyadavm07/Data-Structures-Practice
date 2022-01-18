#include<iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];//global variables
int top=-1;//global variables

void push(int x){
    if (top==MAX_SIZE-1)
    {
        cout<<"overflow"<<endl;
        return;
    }
    
    top++;
    A[top]=x; //these 2 commands could also be written as A[++top]=x;


}

void pop(){
    if (top==-1)
    {
        cout<<"no element to pop !"<<endl;
        return;
    }
    top--;

}

int Top(){
    return A[top];
}

void print(){
    for (int i = 0; i < top; i++)
    {
        cout<<A[i]<<"_";
    }
    cout<<endl;
    
}

int main(){
    push(2);
    print();
    push(5);
    print();
    push(10);
    print();
    pop();
    print();
    push(12);
    print();
    pop();
    cout<<"stack:"<<endl;
    print();
    cout<<"Printing Top: "<<endl;
    Top();
}