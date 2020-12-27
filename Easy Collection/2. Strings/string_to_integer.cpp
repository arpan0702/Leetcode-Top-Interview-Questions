class Solution {
public:
    int myAtoi(string s) {
    stringstream data(s);
    int ans = 0;
    data>>ans;
    return ans;
}
};
