
class Solution {
public:

    vector<int> asteroidCollision(vector<int>&s) {

        stack<int>st;

        for(int i = 0; i<s.size();++i)
        {
           if(st.empty()) st.push(s[i]);

           else if((s[i]<0&&st.top()>0))
           {
               if(abs(s[i])>abs(st.top()))
               {
                   st.pop();
                   i--;
               }
               
               else if(abs(s[i])==abs(st.top()))
               {
                   st.pop();
               }
           }
           else st.push(s[i]);
        }
        s.clear();
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());

        return s;

    }
};
