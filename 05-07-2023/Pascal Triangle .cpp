vector<ll> nthRowOfPascalTriangle(int n) 
    {
        // code here
        vector<long long> v;
        vector<long long> a;
        
        long long int m=1e9+7;
        
        if(n==1)
        {
        v.push_back(1);
        return v;
        }
       
        a = nthRowOfPascalTriangle(n-1);
        
        v.push_back(1);
        
        for(int i=0 ; i< a.size()-1 ;i++)
        {
            v.push_back((a[i]+ a[i+1])%m);
        }
        v.push_back(1);
        return v;
    }
