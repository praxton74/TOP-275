class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int maxi=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]-1)==mp.end())
            {
                int j=0;
                while(mp.find(nums[i]+j)!=mp.end())
                {
                    c++;
                    j++;
                }
                maxi=max(maxi,c);
                c=0;
            }
        }
        return maxi;
    }
};
