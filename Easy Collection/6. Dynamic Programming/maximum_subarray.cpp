class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        int ans=0;
        int sum=0;
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m=max(m,nums[i]);
            sum=sum+nums[i];
            ans=max(ans,sum);
            sum=max(sum,0);
        }
        if(m<0)
            return m;
        else
            return ans;
    }
};
