#include<iostream>
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

int main(){
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    //list - 2,4,6,8
    Print();
}