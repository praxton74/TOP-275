class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        if(s.length()!=goal.length())
        {
            return false;
        }

        if(s==goal)
        {
            bool f=false;
            unordered_map<char,int>mp;
            for(int i=0;i<s.length();i++)
            {
                mp[s[i]]++;

                if(mp[s[i]]==2)
                {
                    f=true;
                    break;
                }
            }
            return f;
        }

        int c=0;
        vector<int>p;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=goal[i])
            {
                p.push_back(i);
                c++;
            }
        }
        if(c==2) 
        {
            swap(s[p[0]],s[p[1]]);
            if(s==goal)
            return true;

            return false;
        }
        return false;
    }
};
