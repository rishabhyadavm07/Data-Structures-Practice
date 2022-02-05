#include<iostream>
#include<queue>
using namespace std;
//hi we will be using the tree we created in the previous file named tree-implementaion-using-recurtion
//we will be adding on the min and max function here only
struct bstnode{
    char data;
    struct bstnode* left;
    struct bstnode* right;
};

struct bstnode* root;

bstnode* getnewnode(char data){
    bstnode* newnode = new bstnode();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

bstnode* insert(bstnode* root, char data){
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

//here we will be implementing level order traversal of the binary tree
void levelorder(bstnode* root){
    if (root == NULL)
    {
        return;
    }
    queue<bstnode*> q;
    q.push(root);
    while (!q.empty())
    {
        bstnode* current = q.front();
        cout<<current->data<<" ";
        if (current->left != NULL)
        {
            q.push(current->left);
        }
        else if (current->right)
        {
            q.push(current->right);
        }
        q.pop(); 
        //completed
        
    }
    
}
//now we will be implementing depth first traversal
void preorder(bstnode* root){

    if (root == NULL)
    {
        return;
    }
    //using DLR here
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(bstnode* root){

    if (root == NULL)
    {
        return;
    }
    //using LDR here
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(bstnode* root){

    if (root == NULL)
    {
        return;
    }
    //using LRD here
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}



bool search(bstnode* root,char data){
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
    cout<<"---START---"<<endl;
    root = NULL;
    root = insert(root,'f');
    cout<<root<<endl;
    cout<<root->data;
    root = insert(root,'d');
    cout<<root->data;
    root = insert(root,'j');
    root = insert(root,'b');
    root = insert(root,'e');
    root = insert(root,'g');
    root = insert(root,'k');
    root = insert(root,'a');
    root = insert(root,'c');
    root = insert(root,'i');
    root = insert(root,'h');



    cout<<"The address stored in root is : "<<root<<endl;
    cout<<"The data stored in the root node is : "<<root->data<<endl;

    // int searchre2z = search(root,27);
    searchrez(search(root,'j'));
    searchrez(search(root,'z'));

    //trying minimum and maximum function
    min(root);
    max(root);
    // cout<<"Maximim data is: "<<max(root)<<endl;
    // cout<<"Minimum data is: "<<min(root)<<endl;

    cout<<"--Printing the binary tree from level order traversal--"<<endl;
    levelorder(root);

    cout<<"--Printing the binary tree from depth first traversal--"<<endl;
    cout<<"--Preorder--"<<endl;
    preorder(root);

    cout<<"--Inorder--"<<endl;
    inorder(root);

    cout<<"--Postorder--"<<endl;
    postorder(root);

    cout<<"---END---"<<endl;

    return 0;
}