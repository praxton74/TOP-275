/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A)
{
    ListNode*f=A;
    ListNode*s=A;
    while(f!=NULL  && f->next!=NULL)
    {
        f=f->next->next;
        s=s->next;
        if(f==s)
        {
            f=A;
            while(f!=s)
            {
                f=f->next;
                s=s->next;
            }
            return s;
        }
    }
   return NULL;
    
}
