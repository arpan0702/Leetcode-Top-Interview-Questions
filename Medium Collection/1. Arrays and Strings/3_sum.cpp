class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n<3)
            return ans;
        ans.reserve(n);
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0&&nums[i]==nums[i-1])
                continue;
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int s=nums[i]+nums[l]+nums[r];
                if(s==0)
                {
                    vector<int> v={nums[i],nums[l],nums[r]};
                    ans.push_back(v);
                    while(l<r&&nums[l]==nums[l+1])
                        l++;
                    while(l<r&&nums[r]==nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(s>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        return ans;
    }
};
