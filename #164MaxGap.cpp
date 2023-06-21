class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int MAX = INT_MIN;
        if(nums.size()<2)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            int s = nums[i]-nums[i-1];
            MAX = max(MAX, s);
        }
        return MAX;
        
    }
};