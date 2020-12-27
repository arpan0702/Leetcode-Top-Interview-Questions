class Solution {
public:
    int isSubstring(string s1, string s2)
    {
        int M = s1.length();
        int N = s2.length();
        for (int i = 0; i <= N - M; i++)
        {
            int j;
            for (j = 0; j < M; j++)
                if (s2[i + j] != s1[j])
                    break;
            if (j == M)
                return i;
        }
        return -1;
    }
    int strStr(string haystack, string needle)
    {
        string s1=haystack,s2=needle;
        if(s2.length()==0)
            return 0;
        int res = isSubstring(s2, s1);
        return res;
    }
};
