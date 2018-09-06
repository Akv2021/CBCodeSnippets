// INput & Output a LL
// https://ide.codingblocks.com/#/s/24486

#include <iostream>
using namespace std;

class node
{
    public:
int data;
node *next;
node(int d)
{
    data = d;
    next = NULL;
}
};

void insertAtTail(node* &head,int data)
{
    if(head== NULL)
    {
        head = new node(data);
        return;
    }
    else
    {
        node* tail = head;
        while(tail->next !=NULL)
        tail = tail->next;

        tail->next = new node(data);
    }
    return;
}

void buildList(node*&head)
{
    int data;
    cin>>data;
    while(data !=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }
}

void printList(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
}

bool searchRecursive(node* head,int key)
{
    if(head == NULL)
    {   cout<<"Not found "<<key;
        return false;
    }

    if(head->data == key)
    {
        cout<<"Found "<<key;
        return true;
    }
    else
     searchRecursive(head->next,key);
}

bool seachIterative(node* head,int key)
{
    while(head!=NULL)
    {
        if(head->data == key)
        {cout<<"Found "<<key;
        return true;
        }
        else
        head = head->next;
    }
    cout<<"Not found "<<key;
    return false;
}

int main() {
    node* head = NULL;
    buildList(head);
    printList(head);

    // searchRecursive(head,0) ? cout<<"Found 0" : cout<<"Not found 0";
    searchRecursive(head,-1);
    seachIterative(head,9);
}
