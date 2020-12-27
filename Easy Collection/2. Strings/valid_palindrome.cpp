class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int l=s.length();
        int i=0,j=l-1;
        while(i<j)
        {
            while(!isalnum(s[i])&&(i<j))
            {
                i++;
            }
            while(!isalnum(s[j])&&(j>i))
            {
                j--;
            }
            if(i>=j)
               break;
            char x=s[i];
            char y=s[j];
            if(x!=y)
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
