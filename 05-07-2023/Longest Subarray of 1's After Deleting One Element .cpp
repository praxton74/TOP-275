class Solution {
public:
    int longestSubarray(vector<int>& nums)
    {
        int c=0,l=0;
        int i=0,j=0;
        while(j<nums.size())
        {
            if(nums[j]==0)
            {
                c++;
            }

            while(c>1)
            {
                if(nums[i]==0)
                {
                    c--;
                }

                i++;
            }

            l=max(l,j-i);
            
            j++;
        } 
        return l;
    }
};
