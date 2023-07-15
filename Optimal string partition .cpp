class Solution {
public:
    int partitionString(string s)
    {
        int c=0;
        set<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
            }
            else
            {
                c++;
                st.clear();
                i--;
            }
        }
        return c+1;
    }
};
