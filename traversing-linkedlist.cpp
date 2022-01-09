#include<iostream>
using namespace std;
struct node
{
    int data;
    node* link;
};
node* head;
int main(){
head = NULL;//empty list

node* temp = new node();
temp->data=2;
temp->link=NULL;

head = temp;

temp = new node();
temp->data=3;
temp->link=NULL;

head->link=temp;

node* temp1 = head;
while (temp1->link!=NULL )
{

    temp1 = temp1->link;
}







return 0;

}