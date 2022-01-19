#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    struct node* link;
};

struct node* head = NULL;

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

void reverse(){
    if (head == NULL) return;
    stack<struct node*> s;
    node* temp = head;
    while (temp != NULL)
    {
        s.push(temp);
        temp=temp->link;//this loop traverses and pushes the address of the nodes to the stack
    }
    node* temp2 = s.top();
    head = temp2;//this code moves the head pointer to the last node
    s.pop();
    while (!s.empty())
    {
        temp2->link=s.top();
        s.pop();//this code removes the address of the nodes already present in the stack
        temp2=temp2->link;
    }
    temp2->link=NULL;
}

int main(){
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    //list - 2,4,6,8
    Print();
    reverse();
    cout<<endl<<"Printing after reversing the list using stacks: "<<endl;
    Print();
}