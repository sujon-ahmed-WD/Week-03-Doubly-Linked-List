void insert_tail(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    // cout<<temp->val<<endl;
    temp->next = newnode->next;
    temp->next->prev = newnode;
    temp->next=newnode;
    newnode->prev=temp;

}