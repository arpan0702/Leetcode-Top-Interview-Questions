class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        vector<int> sol;
        while(digits[i]==9&&i>0)
        {
            digits[i]=0;
            i--;
        }
        if(digits[i]!=9)
        {
            digits[i]++;
            sol=digits;
        }
        else
        {
            digits[i]=0;
            int num=1;
            sol.push_back(num);
            for(auto l:digits)
                sol.push_back(l);
        }
        return sol;
    }
};
