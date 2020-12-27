class Solution {
public:
   string countAndSay(int n)
{
    if(n==1)
        return "1";
    string temp=countAndSay(n-1);
    //cout<<temp<<endl;
    //cout<<num<<endl;
    int l=temp.length(),c=0;
    char k=temp[0];
    string ans="";
    int it=0;
    while(it<l)
    {
        char r=temp[it];
        it++;
        if(k!=r)
        {
            ans=ans+to_string(c)+k;
            c=1;
            k=r;
        }
        else
        {
            c++;
        }
    }
    ans=ans+to_string(c)+k;
    return ans;
}
};
