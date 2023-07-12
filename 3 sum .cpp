class Solution {
public:
    void twosum(int i,int j,vector<int>nums,int target,vector<vector<int>>&ans)
    {
        int q=nums[i-1];
        while(i<j)
        {
            if(nums[i]+nums[j]>target)
            {
                j--;
            }
            else if(nums[i]+nums[j]<target)
            {
                i++;
            }
            else
            {
                vector<int>res;
                res.push_back(q);
                res.push_back(nums[i]);
                res.push_back(nums[j]);
                ans.push_back(res);
                while(i<j && nums[i]==nums[i+1]) i++;
                while(i<j && nums[j]==nums[j-1]) j--;
            i++;
            j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || nums[i-1]!=nums[i])
            {
                twosum(i+1,nums.size()-1,nums,0-nums[i],ans);
            }
        }
        return ans;
    }
};
