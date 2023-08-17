/*
	DESC : Half Pyramid 180 Degree Rotated
		  5
	         *
	       * *
	     * * *
	   * * * *
	 * * * * *
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve1() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = rows; j >= 1; j--) {
			int space = j - i;
			if (space >= 1) {
				cout << "  ";
				space--;
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
}

void solve2() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows; j++) {
			if (j <= rows - i) {
				cout << "  ";
			}
			else {
				cout << "* ";
			}
		}
		cout << endl;
	}
}

int main() {
	solve1();
	solve2();

	return 0;

}
