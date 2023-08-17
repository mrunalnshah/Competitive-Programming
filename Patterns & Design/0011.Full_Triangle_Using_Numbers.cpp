/*
   DESC : Full Triangle Using Numbers
		 5
	     1
	    1 2
	   1 2 3
	  1 2 3 4
	 1 2 3 4 5

   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;
}
