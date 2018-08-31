// Binary tree : Level order traversal
// PREORDER input
// pre In & post traversals

// 3 4 6 -1 -1 -1 8 2 -1 4 -1 -1 1 -1 -1

// https://ide.codingblocks.com/#/s/23421

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

int height(node *root)
{
    if(root == NULL)        // check for leaf node
    return 0;

    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls,rs)+1;
}

void printkthlevel(node *root,int k)
{
    if(root == NULL)
    return;
    if(k == 1)
    {cout<<root->data<<" ";
    return;
    }
    // send two agents down each path
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
    return;
}
void levelOrderPrint(node *root)
{
    int  h = height(root);
    for(int i=1;i<=h;i++)   // level = 1 to H;
    {
        printkthlevel(root,i);
        cout<<endl;
    }
    return;
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
{   // the invalid values of k will return NULL
    if(root == NULL) 
    return;

    printPostorder(root->left);
    printPostorder(root->right);
    cout<<root->data<<" ";
    return;
}
int main() {
    node *root = buildTree();
    // cout<<"Preorder : ";
    // printTree(root);
    // cout<<endl<<"Inorder : ";
    // printInorder(root);
    // cout<<endl<<"Postorder : ";
    // printPostorder(root);

    // cout<<endl<<height(root);
    // cout<<endl<<" level 3 : ";
    // printkthlevel(root,3);
    // cout<<endl<<" level 0 : "; 
    // printkthlevel(root,0);
    // cout<<endl<<" level 6 : ";
    // printkthlevel(root,6);
 
    levelOrderPrint(root);
    return 0;
}
