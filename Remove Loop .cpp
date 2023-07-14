Node*slow=head;
        Node*fast=head;
        
        //we detecting the loop
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        
        //exception case handle 
        if(slow==head || fast==head)
        {
            while(fast->next!=slow)
            {
                fast=fast->next;
            }
            fast->next=NULL;
        }
        
        //normal case handle
        else if(slow==fast)
        {
            slow=head;
            while(slow->next!=fast->next)
            {
                fast=fast->next;
                slow=slow->next;
            }
            fast->next=NULL;
        }
