class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) 
    {
        unordered_map<int, int> m;    
        for(auto it: nums) 
        {
            int times = abs(it / value);
            if(it < 0)
                it = it + times*value + value;
            m[it % value]++;
        }
        int n = nums.size();
        for(int i = 0; i < n; i++) 
        {
            if(m[i % value] == 0) 
            {
                return i;
            }
            else 
            {
                m[i % value]--;
            }
        }
        return n;
    }
};
