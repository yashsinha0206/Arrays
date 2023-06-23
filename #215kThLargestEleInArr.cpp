class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int c = 0;
        if(n==1)
            return nums[0];
        for(int i=n-1;i>=0;i--)
        {
            c++;            
            if(c==k)
                return nums[i];
        }
        return -1;   
    }
};
