class Solution {
public:
    int search(vector<int>& a, int t) {

        int n = a.size();
        int c;

        for(int i=0;i<n;i++)
        {
            if(a[i]==t)
            {  c = i;
                break;}
            else
                c=-1;
        }
        return c;
    }
};