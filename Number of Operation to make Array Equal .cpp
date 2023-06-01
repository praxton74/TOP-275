class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=nums[i]-mini;
        }

        return ans;
    }
};


// Follow Up Question


class Solution {
public:
    int minMoves2(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int median=nums[nums.size()/2];
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=abs(nums[i]-median);
        }

        return ans;
    }
};
