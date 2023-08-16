class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node* temp=head;
        while(temp->next)
        {
            if(temp->data < temp->next->data)
            {
                temp->data=temp->next->data;
                temp->next=temp->next->next;
                temp=head;
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
    }
    
};
