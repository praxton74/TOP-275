class Solution {
public:
    long long minimumMoney(vector<vector<int>>& transactions)
    {
        long long loss=0;
        int ans=0;
        for(int i=0;i<transactions.size();i++)
        {
            if(transactions[i][0]>transactions[i][1])
            {
                loss+=transactions[i][0]-transactions[i][1];
                ans=max(ans,transactions[i][1]);
            }
            else
            {
                ans=max(ans,transactions[i][0]);
            }
        }
        return loss+(long long)ans;
    }
};
