#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data,int n){
    node* temp=new node();
    temp->data=data;
    temp->next=NULL;
    if (n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    node* temp1=head;
    for (int i = 0; i < n-2; i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;

};
void print(){
node* temp2=head;
while (temp2 != NULL)
{
    cout<<temp2->data;
    temp2=temp2->next;
    cout<<"_";
}

};
int main(){
    head = NULL;//empty list
    insert(1,1);//insert 1 at position 1
    insert(2,2);//insert 2 at position 2
    insert(3,1);//insert 3 at position 1
    insert(6,2);//insert 6 at position 2
    //list - 3 6 1 2
    print();



}