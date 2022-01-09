#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
};
int main(){
node* head;
head = NULL;//Empty list

node* temp = new node();
temp->data=2;
temp->link=NULL;
head =  temp;

temp = new node();
temp->data=4;
temp->link=NULL;
head->link=temp;

node* temp1=new node();
temp1->data=6;
temp1->link=NULL;
temp1->link=head;
head = temp1;


node* temp2 = head;
while (temp2 != NULL)
{
    temp2 = temp2->link;
    cout<<temp2->data<<"  ";
}






    return 0;
}