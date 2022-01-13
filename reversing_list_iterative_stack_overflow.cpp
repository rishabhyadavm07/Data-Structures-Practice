//this is the code that i got in the answer when i asked why the code in the other file was not giving any output and was running till 
//infinite time ..
//will be now implementing the reversing list iterations

#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
struct node* head;

void insert(int data){
    struct node* temphead = head;
    if (temphead == nullptr)
    {    
        node* temp = new node();
        temp->data = data;
        temp->link = nullptr;
        // CHANGE HERE: removed unnecessary while loop
        // Directly assign temp to head
        head = temp;
    }
    else
    {
        node* temp = new node();
        temp->data=data;
        temp->link=nullptr;
        // CHANGE HERE: check for temphead->link instead of temphead
        while (temphead->link != nullptr)
        {
            // CHANGE HERE: remove unnecessary line: temphead->link= temp;
            temphead=temphead->link;
        }
        // CHANGE HERE: assign temp to temphead->link (i.e. to last node)
        temphead->link = temp;
    }
}

void reverse(){
    struct node *current,*priv,*next;
    current = head;
    priv=NULL;
    while (current != NULL)
    {
        next= current->link;
        current->link=priv;
        priv= current;
        current = next;
    }
    head = priv;
}

void print(){
    struct node* tempptr = head;
    // CHANGE HERE: check for tempptr instead of tempptr->link
    while (tempptr != nullptr)
    {
        cout<<tempptr->data<<"_";
        tempptr=tempptr->link;
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
    cout<<endl;
    reverse();
    cout<<endl;
    print();
    return 0;
}