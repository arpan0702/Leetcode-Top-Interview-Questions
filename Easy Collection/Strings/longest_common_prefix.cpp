class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
    string smin = *std::min_element(strs.begin(), strs.end(),
        [] (const std::string& s1, const std::string& s2)
        {
            return s1.length() < s2.length();
        });
    int x=smin.length();
    string ans="";
    int flag=0;
    for(int i=0;i<x;i++)
    {
        char ch=strs[0][i];
        for(auto j:strs)
        {
            if(j[i]!=ch)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
        ans=ans+ch;
    }
        return ans;
}
};
