 /*
	DESC : Butterfly Pattern
		  5
 
	*                 *
	* *             * *
	* * *         * * *
	* * * *     * * * *
	* * * * * * * * * *
	* * * * * * * * * *
	* * * *     * * * *
	* * *         * * *
	* *             * *
	*                 *

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
			cout << "* ";
		}

		int space = (rows * 2) - (2 * i);
		for (int j = 1; j <= space; j++) {
			cout << "  ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}

		cout << endl;
	}

	for(int i = rows; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}

		int space = (2 * rows) - (2 * i);
		for (int j = 1; j <= space; j++) {
			cout << "  ";
		}

		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;

}