// Linked list insertion at beg,mid ,end
// https://ide.codingblocks.com/#/s/24406

#include <iostream>
using namespace std;

class node{
public:
int data;
node* next;

node(int d)
{
    data = d;
    next = NULL;
}
};

void insertBegin(node* &head,int data)
{
node* temp = new node(data);
temp->next = head;
head = temp;
}

void print(node* head)
{
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
}

int length(node* head)
{   int count = 0;
    while(head!=NULL)
    {
        head= head->next;
        count++;
    }
    return count;
}

void insertEnd(node* &head,int data)
{

    if(head == NULL)            // Underflow
    {
        head = new node(data);
        return;
    }
    else
    {
node* tail=head;
while(tail->next!=NULL )
tail=tail->next;

tail->next = new node(data);
    }
    return;
}

void insertMid(node* &head,int data,int p)  //insert after pth element
{
    if(p==0 || head == NULL)
    insertBegin(head,data);
    else if(p>length(head))
    insertEnd(head,data);
    else
    {
    node* temp = head;
    while(p-1)
    {temp = temp->next;
     p--;
    }

    node* curr = new node(data);
    curr->next = temp->next;
    temp->next = curr;
    }
}



int main() {

    node *head = NULL;
    
    insertBegin(head,4);
    insertBegin(head,5);
    insertBegin(head,6);
    print(head);
    cout<<endl;
   insertMid(head,7,2);
    print(head);
    cout<<endl;
   insertMid(head,0,9);
    print(head);
    //cout<<"Hello World!";
}
