class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int p=1,maxp=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            p=p*nums[i];
            if(p>maxp)
            {
                maxp=p;
            }
            if(p==0)
            {
                p=1;
            }
        } 
        int q=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            q=q*nums[i];
            if(q>maxp)
            {
                maxp=q;
            }
            if(q==0)
            {
                q=1;
            }
        }  

        return maxp;
    }
};
