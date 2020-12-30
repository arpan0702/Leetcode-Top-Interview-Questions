class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0)
            return 0;
        int low=prices[0];
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]>low)
            {
                dp[i]=max(dp[i-1],prices[i]-low);
            }
            else
            {
                low=min(low,prices[i]);
                dp[i]=dp[i-1];
            }
        }
        return dp[n-1];
    }
};
