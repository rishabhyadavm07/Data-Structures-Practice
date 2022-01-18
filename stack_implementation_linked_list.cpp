#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};

struct node* top = NULL;//global variable

void push(int x){
    struct node* temp = new node();
    temp->data=x;
    temp->link=top;
    top=temp;
}

void pop(){
    struct node* temp;
    if (top == NULL)
    {
        return;
    }
    temp = top;
    top=top->link;
    delete(temp);
}

void Top(){
    struct node* temp = top;
    if (top == NULL)
    {
        cout<<"Empty list !"<<endl;
        return;
    }
    else
    {
        cout<<&top<<endl;
    }
    
    
}

void IsEmpty(){
    if (top != NULL)
    {
        cout<<"Not Empty!"<<endl;
    }
    else if (top == NULL)
    {
        cout<<"Empty !"<<endl; 
    }
    
    
}

void Print(){
    struct node* temp = top;
    // temp = top;
    while (temp != NULL)
    {
        cout<<temp->data<<"_";
        temp = temp->link;
    }
    cout<<endl;
}

int main(){
    push(2);
    push(4);
    push(6);
    push(8);
    pop();
    push(9);
    //list = 9,6,4,2
    Top();
    IsEmpty();
    Print();
    
}