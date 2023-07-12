class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                pivot = i;
                break;
            }
        }
        if(target == nums[pivot])
            return pivot;
        if(target<nums[pivot] && target<nums[0])
        {
            int low = pivot+1;
            int high = nums.size()-1;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid]>target)
                    high = mid-1;
                else
                    low = mid+1;
            }
        }
        else
        {
            int low = 0;
            int high = pivot-1;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                if(nums[mid] == target)
                    return mid;
                else if(nums[mid]>target)
                    high = mid-1;
                else
                    low = mid+1;
            }
        }
       return -1; 
    }
};
