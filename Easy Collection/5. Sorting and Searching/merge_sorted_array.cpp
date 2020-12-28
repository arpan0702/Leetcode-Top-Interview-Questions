class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        if(n!=0)
        {
            while(i<m)
            {
                if(nums1[i]<=nums2[j])
                {
                    i++;
                }
                else
                {
                    swap(nums1[i],nums2[j]);
                    i++;
                    sort(nums2.begin(),nums2.end());
                }
            }
        }
        while(j<n)
        {
            nums1[i]=nums2[j];
            i++;
            j++;
        }
    }
};
