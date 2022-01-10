#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data){
    node* temp = new node();
    temp->data=data;
    temp->next=NULL;
    head = temp;

};
void print(){
    node* temp2=head;
    while (temp2 != NULL)
    {
        cout<<temp2->data<<"_";
        temp2=temp2->next;
    }
    
};
void del(int n){
    node* temp3=head;
    if (n==1)
    {
        head = temp3->next;
        free(temp3);
        return;
    }
    
    for (int i = 0; i < n-2; i++)
    {
        temp3=temp3->next;
        node* temp4=temp3->next;
        temp3->next=temp4->next;
        free(temp4);
    }
    

};
int main(){
    head=NULL;//empty list
    insert(3);
    insert(6);
    insert(4);
    insert(2);
    insert(8);
    //list-3,6,4,2,8
    print();
    int n,x;
    cout<<"position to delete: ";
    cin>>x;
    del(n);
    print();
}