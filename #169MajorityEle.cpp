class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> count;

        for(int x : nums)
            count[x]++;
        
        for(auto it=count.begin(); it!=count.end();it++)
        {
            if(it->second > n/2)
                return (it->first);
        }
        return -1;       
        
    }
};
