class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLength = INT_MAX;
    int Sum = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        Sum += nums[right];
        
        while (Sum >= target) {
            minLength = min(minLength, right - left + 1);
            Sum -= nums[left];
            left++;
        }
    }
    return (minLength != INT_MAX) ? minLength : 0;   
    }
};
