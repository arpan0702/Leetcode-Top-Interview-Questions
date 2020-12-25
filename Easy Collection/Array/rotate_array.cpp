class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size())
            k=k%nums.size();
        vector<int> s(k,0);
        int n=nums.size();
        for(int i=0;i<k;i++)
        {
            s[i]=nums[n-k+i];
        }
        for(int i=n-1;i>=k;i--)
        {
            nums[i]=nums[i-k];
        }
        for(int i=0;i<k;i++)
            nums[i]=s[i];
    }
};
