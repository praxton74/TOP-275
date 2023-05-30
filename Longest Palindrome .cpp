class Solution {
public:
    int longestPalindrome(string s) 
    {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        bool odd=false;
        int l=0;
        for(auto i: mp)
        {
            if(i.second%2!=0)
            {
                odd=true;
                l+=i.second-1;
            }
            else
            {
                l+=i.second;
            }
        }
        if(odd)
        {
            return l+1;
        }
        return l;
    }
};
