// #11 LeetCode
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = height.size();
        int s=0;
        int t=0;
        int i = 0, j = l-1;
        if(l<=100000){
        while(i<j)
        {
            if(height[i]>height[j])
            {
                s = max(s, (j-i)*height[j]);
                j--;
            }
            else
            {
                s = max(s, (j-i)*height[i]);
                i++;
            }
        }
        }
        
        return s;

    }
};