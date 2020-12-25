class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> r,c,m;
        int mr=0,mc=0,z=0;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(r.count(board[i][j]))
                        return false;
                    r.insert(board[i][j]);
                }
                if(board[j][i]!='.')
                {
                    if(c.count(board[j][i]))
                        return false;
                    c.insert(board[j][i]);
                }
                z++;
                if(board[mr][mc]!='.')
                {
                    if(m.count(board[mr][mc]))
                        return false;
                    m.insert(board[mr][mc]);
                }
                if(z%27==0)
                {
                    m.clear();
                    mr++;
                    mc=0;
                }
                else if(z%9==0)
                {
                    mr=mr-2;
                    mc++;
                    m.clear();
                }
                else if(z%3==0)
                {
                    mr++;
                    mc=mc-2;
                }
                else
                {
                    mc++;
                }
            }
            r.clear();
            c.clear();
        }
        return true;
    }
};
