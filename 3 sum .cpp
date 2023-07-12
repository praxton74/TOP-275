class Solution {
public:
    void solve(int i,int j,vector<int>nums,int target,vector<vector<int>>&ans)
    {
        int q=nums[i-1];
        while(i<j)
        {
            if(nums[i]+nums[j]+q<target)
            {
                i++;
            }
            else if(nums[i]+nums[j]+q>target)
            {
                j--;
            }
            else
            {
                vector<int>temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(q);
                ans.push_back(temp);

                while(i<j && nums[i]==nums[i++]) { i++;}
                while(i<j && nums[j]==nums[j--]) {j--;}

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
            if(i==0 || nums[i]!=nums[i-1])
            {
                solve(i+1,nums.size()-1,nums,0-nums[i],ans);
            }
        }
        return ans;
    }
};
