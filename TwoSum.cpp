// #1 LeetCode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        int s = nums.size();
        int diff;
        map<int, int> m;
        for(int i=0;i<s;i++)
        {
            diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i)
            {
                r.push_back(i);
                r.push_back(m.find(diff)->second);
                return r;
            }
            m[nums[i]] = i;
        }
        return r;
    }
};
