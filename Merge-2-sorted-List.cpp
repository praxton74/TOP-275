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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        //return the head of list2 if list1 does not exist
        if(list1==NULL)
            return list2;
        //return the head of list1 if list2 does not exist
        if(list2==NULL)
            return list1;

        //to store the head of reultant link list
        ListNode *result = NULL, *temp=NULL;  
        //deciding head node  
        if(list1->val<=list2->val)
        {
            result = list1;
            list1 = list1->next;
        }
        else
        {
            result = list2;
            list2 = list2->next;
        }
        temp = result;
        //adding rest nodes with comparisions
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        //left over nodes in list1;
        if(list1!=NULL)
            temp->next = list1;
        //left over nodes in list2;
        if(list2!=NULL)
            temp->next = list2;
        
        return result;
    }
};
