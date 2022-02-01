#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};

struct node* head = NULL;

void insert(int x){
    struct node* temp = new node();
    struct node* temphead = head;

    if (temphead == NULL)
    {
        cout<<"--Empty list found, creating the first node--"<<endl;
        temp->data=x;
        temp->link=head;
        head=temp;
        cout<<"--First node created--"<<endl;
    }
    else if (temphead != NULL)
    {
        //traversing the list to get a pointer to point to the last node of the list
        while (temphead->link != NULL)
        {
            temphead=temphead->link;
        }
        
        temphead->link=temp;
        temp->data=x;
        temphead=temp;
    }
    
}

void printlist(){
    cout<<"--Printing the whole list--"<<endl;
    struct node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"_";
        temp = temp->link;
    }
    cout<<endl;
    cout<<"--Printlist function ended--"<<endl;
}

void enqueue(int x){
    cout<<"--Enqueue function called--"<<endl;
    struct node* temphead = head;
    while (temphead->link != NULL)
    {
        temphead = temphead->link;
    }
    struct node* temp = new node();
    temphead->link = temp;
    temp->data = x;
    temphead = temp;//this is not needed but just for the sake of simplicity added this 
    cout<<"--Enqueue function ended--"<<endl;
}

void dequeue(){
    cout<<"--Dequeue function called--"<<endl;
    struct node* temphead = head;
    cout<<temphead->data<<" has been removed--"<<endl;
    temphead = temphead->link;
    head->link = NULL;
    head = temphead;
    cout<<"--Dequeue function ended--"<<endl;
}

bool isempty(){
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int front(){
    int a = head->data;
    return a;
}

int main(){
    cout<<"--Main function executing--"<<endl;;
    insert(2);
    insert(4);
    insert(6);
    insert(3);
    insert(7);
    insert(9);
    insert(1);
    insert(5);
    insert(8);
    //list - 2_4_6_3_7_9_1_5_8
    printlist();
    enqueue(12);
    printlist();
    enqueue(11);
    printlist();
    dequeue();
    printlist();
    dequeue();
    printlist();
    cout<<"---------Executing front and isempty functions---------"<<endl;
    cout<<"Printing the front value: "<<front()<<endl;
    cout<<"Executing Isempty function: "<<isempty()<<endl;
    cout<<"---------End of front and isempty functions---------"<<endl;
    printlist();
    cout<<"--Main function ended--"<<endl;




    return 0;
}

