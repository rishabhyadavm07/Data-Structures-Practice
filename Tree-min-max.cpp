#include<iostream>
using namespace std;
//hi we will be using the tree we created in the previous file named tree-implementaion-using-recurtion
//we will be adding on the min and max function here only
struct bstnode{
    int data;
    struct bstnode* left;
    struct bstnode* right;
};

struct bstnode* root;

bstnode* getnewnode(int data){
    bstnode* newnode = new bstnode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

bstnode* insert(bstnode* root, int data){
    if (root == NULL)
    {
        root = getnewnode(data);
        return root;
    }
    else if (data<=root->data)
    {
        cout<<"--Data is now being put to the left side of the tree--"<<endl;
        root->left=insert(root->left,data);
    }
    else
    {
        cout<<"--Data is now being put to the right side of the tree--"<<endl;
        root->right=insert(root->right,data);
    }
    return root;
    
}

bool search(bstnode* root,int data){
    if (root==NULL)
    {
        return false;
    }
    else if (root->data == data)
    {
        return true;
    }
    else if (data<=root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
    
    
}

int min(bstnode* root){
    bstnode* tpr = root;
    while (tpr->left != NULL)
    {
        tpr = tpr->left;
    }
    cout<<"Minimum data is: "<<tpr->data<<endl;
    return tpr->data;
}

int max(bstnode* root){
    bstnode* tpr = root;
    while (tpr->right != NULL)
    {
        tpr = tpr->right;
    }
    cout<<"Maximim data is: "<<tpr->data<<endl;
    return tpr->data;
}


void searchrez(bool a){
    if (a == 1)
    {
        cout<<"Data found in tree!"<<endl;
    }
    else if (a == 0)
    {
        cout<<"Data not found! "<<endl;
    }
    
    else
    {
        cout<<"[!Error]"<<endl;
    }
}

int main(){
    root = NULL;
    root = insert(root,15);
    cout<<root<<endl;
    cout<<root->data;
    root = insert(root,10);
    cout<<root->data;
    root = insert(root,20);
    root = insert(root,8);
    root = insert(root,12);
    root = insert(root,17);
    root = insert(root,25);
    cout<<"The address stored in root is : "<<root<<endl;
    cout<<"The data stored in the root node is : "<<root->data<<endl;

    // int searchre2z = search(root,27);
    searchrez(search(root,27));
    searchrez(search(root,25));

    //trying minimum and maximum function
    min(root);
    max(root);
    // cout<<"Maximim data is: "<<max(root)<<endl;
    // cout<<"Minimum data is: "<<min(root)<<endl;

    return 0;
}