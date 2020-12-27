class Solution {
public:
    int firstUniqChar(string s) {
        int h[150]={0};
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            char ch=s[i];
            int n=(int)ch;
            h[n]++;
        }
        for(int i=0;i<l;i++)
        {
            char ch=s[i];
            int n=(int)ch;
            if(h[n]==1)
                return i;
        }
        return -1;
    }
};
