class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        int res = a[0];
        int maxEnd = a[0];

        for(int i=1;i<n;i++)
        {
            maxEnd = max(maxEnd+a[i], a[i]);
            res = max(res, maxEnd);
        }

        return res;
        
    }
};