class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f,l;
        int n = nums.size();
        if(nums.empty())
        {
            f = -1;
            l = -1;
        }
        else if(n==1 && nums[0]==target)
        {
            f = 0;
            l = 0;
        }
        else{
        for(int i=0;i<n;i++)
        {            
            if(nums[i]==target)
            {
                f = i;
                break;
            }          
            else
                f = -1;
        }

        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                l = i;
                break;
            }
            else
                l = -1;
        }}
                    
        vector<int>res{f,l};
        return res;
        
    }
};