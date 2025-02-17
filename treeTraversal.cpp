// Tree data structure
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node*right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *buildTree(Node *root){
    
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<" enter the data for insert in left of "<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"enter the data for insert in right of"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

// preorder:  visit node,preorder(left),preorder(right)
void Preorder(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

//inorder: inorder(left),visit node,inorder(right)
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}

//postorder: postorder(left),postorder(right),visit node
void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node *root=NULL;
    root =buildTree(root);
    cout<<"inorder traversal :"<<" ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal :"<<" ";
    Preorder(root);
    return 0;
}
