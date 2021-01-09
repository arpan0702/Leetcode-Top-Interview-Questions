class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t sum=0;
        int j=0;
        for(int i=31;i>=0;i--)
        {
            long x=(n>>i)&1;
            sum=sum+(x*((long)pow(2,j)));
            j++;
        }
        return sum;
    }
};
