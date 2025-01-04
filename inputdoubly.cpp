 #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void froward_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    
}
 
void  add_tail(Node*&head,Node*&tail,int val)
 {
    Node* newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    head->next=newnode;
    newnode->prev=head;
     


 }
 
int main()
{
 Node*head=NULL;
 Node*tail=NULL;

int val;
while(cin>>val&&val!=-1)
{
add_tail(head,tail,val);
}
froward_print(head);

     
 
    return 0;
}