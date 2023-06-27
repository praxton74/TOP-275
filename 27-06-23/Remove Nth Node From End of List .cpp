/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head==nullptr || head->next==nullptr)
            return head->next;
        
        ListNode* start=new ListNode();
        start->next=head;
        
        ListNode*f=start;
        ListNode*s=start;
        
        
        for(int i=1;i<=n;i++)
        {
            f=f->next;
        }
        if(f==NULL)
        {
            return NULL;
        }
        while(f->next!=nullptr && f!=NULL)
        {
            f=f->next;
            s=s->next;
        }
        ListNode* del=new ListNode();
        del->next=s->next;
        s->next=s->next->next;
        delete(del);
        return head;
    }
};
