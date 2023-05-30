class Solution {
public:
    int longestPalindrome(string s) 
    {
        int oc=0;
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2==0)
            {
                oc--;
            }
            else
            {
                oc++;
            }
        }

        if(oc<1)
        {
            return s.length();
        }
        else
        {
            return s.length()+1-oc;
        }
    }
};
