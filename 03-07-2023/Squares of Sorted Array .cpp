class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=abs(nums[i]);
        }   
        int l=0,r=nums.size()-1;
        int k=nums.size()-1;
        while(l<=r)
        {
            if(nums[l]<nums[r])
            {
                ans[k]=nums[r]*nums[r];
                r--;
            }
            else
            {
                ans[k]=nums[l]*nums[l];
                l++;
            }
            k--;
        }
        return ans;
    }
};
