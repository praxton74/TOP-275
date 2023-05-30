class Solution {
public:
    string longestPalindrome(string s)
    {
        int n =s.length();
        string str;
        int ans = 0;
        

        for(int i=0;i<s.length();i++)
        {
           // if length is even
          
           int left=i,right=i+1;
           while(left>=0  && right<s.length() &&  s[left]==s[right] )
           {     
                left--;
                right++;
           }
           left++;
           right--;
           int length = right-left+1;
           if(ans<length)
           {
               ans=length;
               str = s.substr(left, ans);
           }
          
          
           // if length is odd
          
           left=i,right=i; 
           while(left>=0 && right<s.length() && s[left]==s[right])
           {       
                  left--;
                  right++;
           }
           left++;
           right--;
           length = right-left+1;
           if(ans<length)
           {
               ans=length;
               str = s.substr(left, ans);
           }
        }
    
     return str;
    }
};
