class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_price=prices[0];
        int ans=0;
        for(auto p:prices)
        {
            min_price=min(min_price,p);
            ans=max(ans,p-min_price);
        }
        return ans;
    }
};
