class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int>ans;
        int top = 0;
        int bottom = m.size()-1;
        int left = 0;
        int right = m[0].size()-1;

        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
                ans.push_back(m[top][i]);
            top++;

            for(int j=top;j<=bottom;j++)
                ans.push_back(m[j][right]);
            right--;

            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                    ans.push_back(m[bottom][i]);
                bottom--;
            }

            if(left<=right)
            {
                for(int j=bottom;j>=top;j--)
                    ans.push_back(m[j][left]);
                left++;
            }
        }
        return ans;
        
    }
};