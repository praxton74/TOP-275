int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0;
    for(int j=1;j<A.size();j++)
    {
        if(A[i]!=A[j])
        {
            i++;
            A[i]=A[j];
        }
    }
    return i+1;
}
