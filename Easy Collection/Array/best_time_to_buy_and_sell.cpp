class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1,ans=0;
        int n=prices.size();
        while(j<n)
        {
            if(prices[j]<prices[i])
            {
                i++;
                j++;
            }
            else
            {
                if(j+1<n)
                {
                    if(prices[j+1]<prices[j])
                    {
                        ans=ans+prices[j]-prices[i];
                        i=j+1;
                        j=i+1;
                    }
                    else
                    {
                        j++;
                    }
                }
                else
                {
                    ans=ans+prices[j]-prices[i];
                    i=j+1;
                    j=i+1;
                }
            }
        }
        return ans;
    }
};
