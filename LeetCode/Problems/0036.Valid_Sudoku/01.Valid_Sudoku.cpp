/*
	DESC : Valid Sudoku
		LEET CODE : https://leetcode.com/problems/valid-sudoku/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

class Solution {
public:
	bool validBox(vector<vector<char>>& board, int start_row,int end_row,int start_column,int end_column) {
		unordered_set<char> set;

		for(int i = start_row; i <= end_row; i++) {
			for(int j = start_column; j <= end_column; j++) {
				if(board[i][j] == '.') {
					continue;
				}
				if(set.find(board[i][j]) != set.end()) {
						return false;
				}
				set.insert(board[i][j]);
			}
		}
		return true;
	}

	bool isValidSudoku(vector<vector<char>>& board) {
		for(int rows = 0; rows < 9 ; rows++) {
			unordered_set<char> set;

			for(int columns = 0; columns < 9 ; columns++) {

				if(board[rows][columns] == '.') {
					continue;
				}
				if(set.find(board[rows][columns]) != set.end()) {
					return false;
				}
				set.insert(board[rows][columns]);
			}
		}

		for(int columns = 0; columns < 9 ; columns++) {
			unordered_set<char> set;

			for(int rows = 0; rows < 9 ; rows++) {

				if(board[rows][columns] == '.') {
					continue;
				}
				if(set.find(board[rows][columns]) != set.end()) {
					return false;
				}
				set.insert(board[rows][columns]);
			}
		}

		for(int start_row = 0 ; start_row < 9; start_row = start_row + 3) {
			int end_row = start_row + 2;
	
			for(int start_column = 0;  start_column < 9 ; start_column = start_column + 3) {
				int end_column = start_column + 2;

				if(!validBox(board,start_row,end_row,start_column,end_column)) {
					return false;
				}
			}
		}
		return true;
	}
};

/*
for loop --> rows verify
for loop --> columns verify
for loop --> box 3x3 verify
*/