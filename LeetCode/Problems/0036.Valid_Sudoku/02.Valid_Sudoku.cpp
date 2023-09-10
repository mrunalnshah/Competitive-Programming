/*
	DESC : Valid Sudoku
		LEET CODE : https://leetcode.com/problems/valid-sudoku/
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
		unordered_set<string> set;
		
		for(int i = 0 ; i < 9 ; i++) {
			for(int j = 0; j < 9; j++) {

				if(board[i][j] == '.') {
					continue;
				}
				string row = string(1, board[i][j]) + "_ROW_" + to_string(i);
				string column = string(1, board[i][j]) + "_COLUMN_" + to_string(j);
				string box = string(1, board[i][j] )+ "_BOX_" + to_string(i/3) + "-" + to_string(j/3);
				
				if(set.find(row) != set.end() || set.find(column) != set.end() || set.find(box) != set.end()) {
					return false;
				}
				set.insert(row);
				set.insert(column);
				set.insert(box);
			}
		}
		return true;
    }
};


/*
	for i to 9
		for j to 9
			if board[i][j] == '.' 
				continue
			string row = "$value_ROW_$i"
			string column = "$value_COLUMN_$j"
			string box = "$value_BOX_$i-$j"
			
			if(row in set or column in set or box in set) 
				false
			
	true		
*/