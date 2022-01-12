#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data){
    struct node* temphead=head;
    if (temphead == NULL)
    {    
        node* temp = new node();
        temp->data=data;
        temp->next=NULL;
        while (temphead == NULL){
            head==temp;
            temphead==temp;
            return;
        }
    }
    
    else if (temphead != NULL)
    {
        node* temp = new node();
        temp->data=data;
        temp->next=NULL;
        while (temphead != NULL)
        {
        temphead->next= temp;
        temphead=temphead->next;
        }
    }
}
// void insert(int data){
//     node* temp = head;
    
//     if (temp == NULL)
//     {
//         struct node* temp2 = new node();
//         temp2->data=data;
//         temp2->next=NULL;
//         head = temp2;
//         return;
//     }
//     else if (temp != NULL)
//     {
//         struct node* temp2 = new node();
//         temp2->data=data;
//         temp2->next=NULL;
        
//         while (temp->next!=NULL)
//         {
//             temp = temp->next;
//         }
//         temp->next=temp2;
//         temp= temp2;
// }
void print(){
    struct node* tempptr = head;
    while (tempptr->next != NULL)
    {
        cout<<tempptr->data<<"_";
        tempptr=tempptr->next;
    }
    
}
int main(){
    head=NULL;

    insert(2);
    insert(4);
    insert(8);
    insert(6);
    //list - 2_4_8_6
    print();
    return 0;
}
