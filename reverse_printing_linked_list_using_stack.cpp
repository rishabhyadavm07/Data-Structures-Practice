#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    struct node* link;
};

struct node* head = NULL;
//pasting the simple linked list creation functions from my universal linked list creation program in this repository
void insert(int x){
    if (head == NULL)
    {
        struct node* temp = new node();
        temp->data=x;
        temp->link=NULL;
        head = temp;
    }
    else if (head != NULL)
    {
        struct node* temp = new node();
        struct node* headtemp = head;
        while (headtemp->link != NULL)
        {
            headtemp = headtemp->link;
        }
        temp->data=x;
        temp->link=NULL;
        headtemp->link=temp;
    }
    return;
    
}

void Print(){
    cout<<"Print function called: "<<endl;
    if (head == NULL)
    {
        cout<<"Empty list";
    }
    else if (head!=NULL)
    {
        struct node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data;
            temp=temp->link;
        }
        
    }
    return;
}
//now implementing reverse printing function 
void ReversePrint(){
    cout<<"ReversePrint function called: "<<endl;
    struct node* temp =head;
    stack<struct node*> S;//calling stack library from STL
    while (temp != NULL)
    {
        S.push(temp);
        temp=temp->link;
    }
    while (!S.empty())
    {
        temp = S.top();
        cout<<temp->data;
        S.pop();
    }
    cout<<endl;
    
}

int main(){
    cout<<"Main function execution started : "<<endl;
    insert(2);
    insert(3);
    insert(5);
    insert(6);
    //List - 2,3,5,6
    Print();
    cout<<endl;
    ReversePrint();
    cout<<endl;
    Print();
}