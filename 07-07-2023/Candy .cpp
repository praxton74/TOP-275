class Solution {
public:
    int candy(vector<int>& ratings)
    {
        int c=0;
        if(ratings.size()==1)
        {
            return 1;
        }

        vector<int>ans(ratings.size(),1);       // initially give all 1 candy
        
        for(int i=1;i<ratings.size();i++)      //If neighbour rating is less give that child one more candy  
        {
            if(ratings[i]>ratings[i-1])
            {
                ans[i]=ans[i-1]+1;
            }
        }

        for(int i=ratings.size()-2;i>=0;i--)      // reverse
        {
            if(ratings[i]>ratings[i+1] && ans[i]<=ans[i+1])
            {
                ans[i]=ans[i+1]+1;
            }
        }
        return accumulate(ans.begin(),ans.end(),0LL);
    }
};
