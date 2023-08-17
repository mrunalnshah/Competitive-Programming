/*
   DESC : 0_1_Pattern
		 5
	1
	0 1
	1 0 1
	0 1 0 1
	1 0 1 0 1
	
	HINT : USE Coordinates and Add them to see pattern.

   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= i; j++) {
			if ((i + j) - 2 * ((i+j)/2) == 0) {
				cout << 1 << " ";
			}
			else {
				cout << 0 << " ";
			}
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;
}