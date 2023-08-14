/*
   DESC : Star Pattern
		 5					Star Count
		  *					--> 1
		* * *				--> 3
	  *	* * * *				--> 5
	* * * * * * *			--> 7
  * * * * * * * * *			--> 9
  * * * * * * * * *			--> 9
 	* * * * * * *			--> 7
	  *	* * * *				--> 5
		* * *				--> 3
		  *					--> 1
		  
		  HINT : 2 * current_row - 1
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
			cout << "  ";
		}
		for (int j = 1; (j <= (2 * i - 1)); j++) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = rows; i >= 1; i--) {
		for (int j = 1; j <= rows - i; j++) {
			cout << "  ";
		}
		for (int j = 1; (j <= (2 * i - 1)); j++) {
			cout << "* ";
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;
}