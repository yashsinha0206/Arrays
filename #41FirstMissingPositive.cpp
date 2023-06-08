class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int n = a.size();
        int c=0;
        int ans;
        if(a.empty())
            ans = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==t)
                ans =  i;
                
            if(a[i]!=t)
                c++;
        }
        if(c==n)
        {
            for(int i=0;i<n;i++)
            {
                if(t>a[n-1])
                    ans = n;

                else if(t>a[i])
                    ans = i+1;
                else if(t<a[0])
                    ans = 0;
                // else
                    // ans = i-1;
            }

        }   
        return ans;     
    }
};