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
    void insertattail(ListNode* &head, int val)
    {
      ListNode* n= new ListNode(val);
      if(head==NULL)
      {
          head=n;
      }
          return;
    }
    ListNode* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
      int n=lists.size();
      vector<int> ans;
      for(int i=0;i<n;i++)
      {
        ListNode* temp=lists[i];
        while(temp!=NULL)
        {
          ans.push_back(temp->val);
          temp=temp->next;
        }
      }
      
       sort(ans.begin(),ans.end());
       ListNode* res=new ListNode(0);
       for(int i=0;i<ans.size();i++)
       {
         insertattail(res, ans[i]);
       }
       return res->next;
    }
};
