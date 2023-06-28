class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int b=0,d=0,s=0;
        for(int i=0;i<gas.size();i++)
        {
            b+=gas[i]-cost[i];

            if(b<0)
            {
                d+=b;
                s=i+1;
                b=0;
            }
        }

        if(b+d>=0)
        {
            return s;
        }
        else
        {
            return -1;
        }
    }
};
