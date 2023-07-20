class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        
        for (int i : asteroids) 
        {
            if (i > 0 || s.empty()) 
            {
                s.push(i);
            } 
            else 
            {
                while (!s.empty() && s.top() > 0 && s.top() < abs(i)) 
                {
                    s.pop();
                }
                if (s.empty() || s.top() < 0) 
                {
                    s.push(i);
                } else if (s.top() == abs(i)) 
                {
                    s.pop();
                }
            }
        }
        
        vector<int> result(s.size());
        for (int i = s.size() - 1; i >= 0; i--) 
        {
            result[i] = s.top();
            s.pop();
        }
        
        return result;
    }
};
