vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        int missing = 0;
        int duplicate = 0;
        
        // Find the duplicate number
        for (int i = 0; i < n; i++) 
        {
            int index = abs(arr[i]) - 1;
            if (arr[index] > 0) 
            {
                arr[index] = -arr[index];
            } 
            else 
            {
                duplicate = abs(arr[i]);
            }
        }
        
        // Find the missing number
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > 0) 
            {
                missing = i + 1;
                break;
            }
        }
        
        return { duplicate, missing };
    }
