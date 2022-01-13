#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;

struct node* getnewnode(int x){
    struct node* tempnode = new node();
    tempnode->data=x;
    tempnode->next=NULL;
    tempnode->prev=NULL;
    return tempnode;    
};
void insertathead(int x){
    struct node* newnode = getnewnode(x);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void print(){
    struct node* tempprint = head;
    while (tempprint != NULL)
    {
        cout<<tempprint->data<<"_";
        tempprint=tempprint->next;
    }
    cout<<endl;
}

void reverseprint(){
    struct node* tempreverse = head;
    if (tempreverse == NULL)
    {
        return;//empty list
    }
    while (tempreverse->next != NULL)
    {
        tempreverse = tempreverse->next;
    }
    //now traversing backwards using prev
    while (tempreverse != NULL)
    {
        cout<<tempreverse->data<<"_";
        tempreverse=tempreverse->prev;
    }
    
}
void insertattail(int x){
    struct node* newnode = getnewnode(x);
    struct node* temptail = head;
    while (temptail->next != NULL)
    {
        temptail = temptail->next;
    }
    temptail->next= newnode;
    newnode->prev=temptail;
    newnode->next=NULL;
}
int main(){
    head=NULL;//empty list
    insertathead(2);
    insertathead(4);
    insertathead(8);
    insertattail(3);
    //list - 2_4_8_3
    print();
    cout<<endl;
    reverseprint();
    cout<<endl;
    print();
    cout<<endl;
    return 0;
}