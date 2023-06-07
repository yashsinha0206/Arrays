class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        
        // Find the first element from the right that breaks the descending order
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i >= 0) {
            // Find the element just greater than nums[i] in the suffix
            int j = n - 1;
            while (j > i && nums[j] <= nums[i]) {
                j--;
            }
            
            // Swap nums[i] and nums[j]
            swap(nums[i], nums[j]);
        }
        
        // Reverse the suffix to get the next lexicographically greater permutation
        reverse(nums.begin() + i + 1, nums.end());
        
    }
};