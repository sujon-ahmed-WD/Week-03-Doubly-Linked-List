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

void delete_head(Node *&head, Node *&tail)
{
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

void delete_head(Node*&head,Node*&tail)
{
    Node*dletenode=head;
    head=head->next;
    if(head==NULL)
    {
        head=NULL;
        tail==NULL;
        return;
    }
    head->prev=NULL;
}





void f_p(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void B_p(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(40);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_head(head, tail);
    f_p(head);
    return 0;
}