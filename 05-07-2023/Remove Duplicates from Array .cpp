class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
    vector<int>ans;
	int n=nums.size();
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	for(int i=0;i<nums.size()-1;i++)
	{
		if(nums[i]!=nums[i+1])
		{
			ans.push_back(nums[i]);
		}
	}
	ans.push_back(nums[n-1]);
	int s=ans.size();
	return s;    
    }
};
