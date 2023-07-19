bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                return true;
            }
        }
        
        int s=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            if(s==0)
            {
                return true;
            }
            
            if(mp.find(s)!=mp.end())
            {
                return true;
            }
            mp[s]=1;
        }
        
        return false;
    }
