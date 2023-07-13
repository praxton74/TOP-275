class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int area=INT_MIN;
        int s=0,e=height.size()-1;
        while(s<e)
        {
            if(height[s]<height[e])
            {
                area=max(area,(min(height[s],height[e])*(e-s)));
                s++;
            }
            else
            {
                area=max(area,(min(height[s],height[e])*(e-s)));
                e--;
            }

        }
        return area;
    }
};
