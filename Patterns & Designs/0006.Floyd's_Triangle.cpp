/*
	DESC : Floyd's Triangle
		  5
	1
	2 3
	4 5 6
	7 8 9 10
	11 12 13 14 15

	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;
	
	int count = 1;
	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			cout << count << " ";
			count++;
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;

}