class Solution {
public:
    int longestValidParentheses(string s) 
    {
        int l=0;        // '('
        int r=0;        // ')'
        int maxi=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                l++;
            }
            if(s[i]==')')
            {
                r++;
            }
            if(r>l)
            {
                l=0;
                r=0;
                continue;
            }
            if(l==r)
            {
                maxi=max(maxi,l+r);
            }
        }
        l=0,r=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='(')
            {
                l++;
            }
            if(s[i]==')')
            {
                r++;
            }
            if(l>r)
            {
                l=0;
                r=0;
                continue;
            }
            if(r==l)
            {
                maxi=max(maxi,l+r);
            }
        }

        return maxi;
    }
};
