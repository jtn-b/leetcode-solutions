class Solution {
public:
    int maxArea(vector<int>& h) {
        int N = h.size();
        
        int i = 0;
        int j = N-1;
        int curMax = 0;
        while(i < j)
        {
            int cap = min(h[i],h[j])*(j-i);
           // cout << cap << '\n';
            curMax = max(curMax,cap);
            if(h[i] >= h[j])
                --j;
            else 
                ++i;
        }
        return curMax;
    }
};
