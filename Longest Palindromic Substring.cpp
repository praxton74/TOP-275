class Solution {
public:
    string longestPalindrome(string s)
    {
        int st=0,end=0;
        int max_len=1;

        // for ODD_LEN
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i;

            while(s[l]==s[r] && l>=0 && r<s.length())
            {
                l--;
                r++;
            }
            l++;
            r--;
            int len=r-l+1;

            if(len>max_len)
            {
                max_len=len;
                st=l;
                end=r;
            }
        }

        // for EVEN_LEN 
        for(int i=0;i<s.length();i++)
        {
            int l=i,r=i+1;

            while(s[l]==s[r] && l>=0 && r<s.length())
            {
                l--;
                r++;
            }
            l++;
            r--;
            int len=r-l+1;
            
            if(len>max_len)
            {
                max_len=len;
                st=l;
                end=r;
            }
        }

        return s.substr(st,end+1);
    }
};
