class Solution {
public:
    bool isAnagram(string s, string t) {
        int h[256]={0};
        int l=s.length();
        if(l!=t.length())
            return false;
        for(int i=0;i<l;i++)
        {
            char c1=s[i];
            char c2=t[i];
            int x=(int)c1;
            int y=(int)c2;
            h[x]++;
            h[y]--;
        }
        for(int i=0;i<256;i++)
        {
            if(h[i]!=0)
                return false;
        }
        return true;
    }
};
