// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int check(int low, int high)
    {
        int mid=low+(high-low)/2;
        if(low>=high)
            return low;
        if(isBadVersion(mid))
            return check(low,mid);
        else
            return check(mid+1,high);
    }
    int firstBadVersion(int n)
    {
        if(n==1)
            return 1;
        return check(1,n);
    }
};
