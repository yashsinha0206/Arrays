// #26
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // vector<int> v;
        int s = nums.size();
        int j=1;
        int i=1;
        while(i<s)
        {
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;}
            i++;
        }
        cout<<j;
        for(int i=0;i<s;i++)
            cout<<nums[i];
        
        return j;
    }
};