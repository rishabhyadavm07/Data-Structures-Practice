//this is the code that i got in the answer when i asked why the code in the other file was not giving any output and was running till 
//infinite time ..
//will be now implementing the reversing list iterations

#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;

void insert(int data){
    struct node* temphead = head;
    if (temphead == nullptr)
    {    
        node* temp = new node();
        temp->data = data;
        temp->next = nullptr;
        // CHANGE HERE: removed unnecessary while loop
        // Directly assign temp to head
        head = temp;
    }
    else
    {
        node* temp = new node();
        temp->data=data;
        temp->next=nullptr;
        // CHANGE HERE: check for temphead->next instead of temphead
        while (temphead->next != nullptr)
        {
            // CHANGE HERE: remove unnecessary line: temphead->next= temp;
            temphead=temphead->next;
        }
        // CHANGE HERE: assign temp to temphead->next (i.e. to last node)
        temphead->next = temp;
    }
}

void print(){
    struct node* tempptr = head;
    // CHANGE HERE: check for tempptr instead of tempptr->next
    while (tempptr != nullptr)
    {
        cout<<tempptr->data<<"_";
        tempptr=tempptr->next;
    }
    
}

int main(){
    head=nullptr;

    insert(2);
    insert(4);
    insert(8);
    insert(6);
    //list - 2_4_8_6
    print();
    return 0;
}