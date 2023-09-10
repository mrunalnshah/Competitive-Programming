/*
	DESC : Valid Sudoku
		LEET CODE : https://leetcode.com/problems/valid-sudoku/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9], col[9][9], grid[9][9];
        memset(row, false, sizeof(row));
        memset(col, false, sizeof(col));
        memset(grid, false, sizeof(grid));

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                
                int val = board[i][j] - '1';
                int gridNo = (j / 3) + (i / 3) * 3;
                
                if (row[i][val] || col[j][val] || grid[gridNo][val]) {
                    return false;
                }

                row[i][val] = true;
                col[j][val] = true;
                grid[gridNo][val] = true;
            }
        }
        return true;
    }
};

