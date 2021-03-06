// preorder Binary tree build and traverse

// https://ide.codingblocks.com/#/s/23350

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

    if(d == -1) // don't make a node for -1
    return NULL;

    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printTree(node *root)
{
    if(root == NULL)    // return towards parent from leaf
    return;

    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
    return;
}

int main() {
    node *root = buildTree();
    printTree(root);
}
