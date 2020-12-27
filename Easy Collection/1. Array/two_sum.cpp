class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> s;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int d=target-nums[i];
            if(m[d]>0&&m[d]!=i)
            {
                s.push_back(i);
                s.push_back(m[d]);
                break;
            }
        }
        return s;
    }
};
