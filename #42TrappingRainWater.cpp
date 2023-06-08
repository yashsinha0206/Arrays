class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        int lm[n],rm[n]; // an also use vector  lm and rm....will take less run time
        lm[0] = h[0];  // lm = left max
        rm[n-1] = h[n-1]; // rm = right max
        int res = 0;

        for(int i=1;i<n;i++)
            lm[i] = max(lm[i-1],h[i]);
        

        for(int j=n-2;j>=0;j--)
            rm[j] = max(rm[j+1],h[j]);

        
        for(int k=0;k<n;k++)
            res = res + (min(lm[k],rm[k])-h[k]);
        
        return res;
        
    }
};