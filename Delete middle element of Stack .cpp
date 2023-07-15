class Solution
{
    public:
    //Function to delete middle element of a stack.
    void find(int j,int i,stack<int>&s){
        if(j==i){
            s.pop();
            return;
        }
        int x=s.top();
        s.pop();
        find(j+1,i,s);
        s.push(x);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
       
        int i=(sizeOfStack+1)/2;
            i=sizeOfStack-i+1;
        find(1,i,s);
        return;
        
        
    }
}
