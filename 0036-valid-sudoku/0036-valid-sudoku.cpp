class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<set<int>> row(9);
        vector<set<int>> coulmn(9);
        int subblock[3][3][10]={0}; // 3*3 sub block with 10 elements inside
        int value=0;
        for(int i=0;i<9 ;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                    continue;

                value=board[i][j]-'0';
                if(subblock[i/3][j/3][value]==1 || row[i].count(value)==1 || coulmn[j].count(value)==1 ) // false
                     return false ;
                else {
                    row[i].insert(value);
                    coulmn[j].insert(value);
                    subblock[i/3][j/3][value]=1 ; 
                }

            }
        }
        return true;


    }
};