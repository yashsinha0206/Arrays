class Solution {
public:
    int threeSumClosest(vector<int>& a, int t) {
        sort(a.begin(),a.end());
        int ans = INT_MAX;
        int s,res;

        for(int i=0;i<a.size()-2;i++)
        {
            int j = i+1;
            int k = a.size()-1;

            while(j<k)
            {
                s = a[i]+a[j]+a[k];
                if(s==t)
                    return s;
                
                int diff = abs(t-s);                
                if(diff<ans)
                {
                    ans = diff;
                    res = s;
                }

                if(s<t)
                    j++;
                else
                    k--;    
            }
        }
        return res;
        
    }
};

