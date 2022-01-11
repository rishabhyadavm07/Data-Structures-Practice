#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert(int data){
    node* temp = head;
    
    if (temp == NULL)
    {
        struct node* temp2 = new node();
        temp2->data=data;
        temp2->next=NULL;
        head = temp2;
        return;
    }
    else if (temp != NULL)
    {
        struct node* temp2 = new node();
        temp2->data=data;
        temp2->next=NULL;
        
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next=temp2;
        temp= temp2;
    }
    
    
    

};

void reverse(node* head)
{
    struct node *current,*up,*down;
    current = head;
    down=NULL;
    while (current!=NULL)
    {
        up=current->next;
        current->next=down;
        down = current;
        current = up;
    }
    head = down;
    


};
void print(){
    node * tempprint = head;
    while (tempprint!=NULL)
    {
        cout<<tempprint->data<<"_";
        tempprint = tempprint->next;
        
    }
    cout<<endl;
    

};

int main(){
    head=NULL;//empty list
    insert(2);
    insert(4);
    insert(7);
    insert(9);
    //list - 2_4_7_9
    print();
    reverse(head);
    print();
}