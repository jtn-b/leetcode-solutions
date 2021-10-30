class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        
        if(N == 0)
            return 0;
        if(N == 1)
            return nums[0];
        
        int dp[N][2];
        memset(dp,0,sizeof dp);
        
        dp[0][1] = nums[0];
        dp[1][0] = nums[1];
        dp[1][1] = nums[0];
        
        
        for(int i = 2; i < N; ++i)
        {
            for(int j = 0; j < 2; ++j)
            {
                if(i == N-1)
                {
                    dp[i][j] = (j==1)?dp[i-1][j]:max(dp[i-2][j]+nums[i],dp[i-1][j]);
                }
                else
                    dp[i][j] = max(dp[i-2][j]+nums[i],dp[i-1][j]);
            }
        }
        return max(dp[N-1][0],dp[N-1][1]);
    }
};
