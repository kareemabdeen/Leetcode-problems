#include <vector>
#include <set>
#include <map>

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> row(9);
        vector<set<int>> column(9);
        map<pair<int, int>, set<int>> subblock;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }

                int value = board[i][j] - '0';

                // Check if the value already exists in the same row, column or sub-block
                if (row[i].count(value) == 1 || column[j].count(value) == 1 || subblock[{i/3, j/3}].count(value) == 1) {
                    return false;
                } else {
                    row[i].insert(value);
                    column[j].insert(value);
                    subblock[{i/3, j/3}].insert(value);
                }
            }
        }

        return true;
    }
};