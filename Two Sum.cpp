class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
      int B=target;
      unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++)
      {
          if(mp.find(B-nums[i])==mp.end())
          {
              mp[nums[i]]=i;
          }
          else
          {
              return {i,mp[B-nums[i]]};
          }
      }
      return {0,0};  
    }
};
