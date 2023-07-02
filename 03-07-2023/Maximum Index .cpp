int maxIndexDiff(int arr[], int n)
    {
        // code here
        int mx=INT_MIN;
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(arr[i]<=arr[j])
            {
                mx=max(mx,j-i);
                i=0;
                j--;
            }
            else
            {
                i++;
            }
        }
        return mx;
    }
