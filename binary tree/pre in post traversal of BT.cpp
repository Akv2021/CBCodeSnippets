// Binary tree : Preorder input
// Pre, iN & Post order traversal

// 3 4 6 -1 -1 -1 8 2 -1 4 -1 -1 1 -1 -1

// https://ide.codingblocks.com/#/s/23412

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree()
{
    int d;
    cin>>d;

    if(d == -1)
    return NULL;

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printTree(node *root)
{
    if(root == NULL)
    return;

    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
    return;
}

void printInorder(node *root)
{
    if(root == NULL)
    return;

    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
    return;
}

void printPostorder(node *root)
{
    if(root == NULL)
    return;

    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
    return;
}
int main() {
    node *root = buildTree();
    cout<<"Preorder : ";
    printTree(root);
    cout<<endl<<"Inorder : ";
    printInorder(root);
    cout<<endl<<"Postorder : ";
    printPostorder(root);
    return 0;
}
