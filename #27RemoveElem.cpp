class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator j;
        j = nums.begin();
        for(int i = 0;i<nums.size(); i++)
        {
            if(nums[i]==val)
            {
                nums.erase(j);
                j--;
                i--;
            }
            j++;
        }
        return nums.size();
    }
};