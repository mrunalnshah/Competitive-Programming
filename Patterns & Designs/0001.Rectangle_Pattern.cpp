/*
	DESC : Rectangle Pattern
		3,4
		* * *
		* * *
		* * *
		* * *	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/



#include <iostream>

using namespace std;

void solve() {
	int rows, columns;

	cout << "Enter Rows : ";
	cin >> rows;
	cout << "Enter Columns : ";
	cin >> columns;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	solve();
	
	return 0;

}