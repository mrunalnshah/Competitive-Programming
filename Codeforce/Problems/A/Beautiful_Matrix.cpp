/*
	DESC : A. Beautiful Matrix
		CODEFORCE : https://codeforces.com/contest/263/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 


#include <bits/stdc++.h>

using namespace std;

void solve() {
	int matrix[5][5];
	int rows = 0, columns = 0;
	int steps = 0;

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
			if(matrix[i][j] == 1) {
				rows = 2 - i;
				columns = 2 - j;
				break;
			}
		}
	}
	if(rows < 0) {
		rows = rows * -1;
	}
	if(columns < 0) {
		columns = columns * -1;
	}
	steps = rows + columns;
	cout << steps << endl;
}

int main() {
	solve();

	return 0;
}
