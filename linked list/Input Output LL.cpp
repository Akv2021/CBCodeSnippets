// INput & Output a LL
// https://ide.codingblocks.com/#/s/24417
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

int main() {
    node* head = NULL;
    buildList(head);
    printList(head);
}
