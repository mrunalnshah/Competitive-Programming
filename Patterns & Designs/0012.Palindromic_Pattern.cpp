/*
   DESC : Palindromic Pattern
		 5
		  1
		2 1 2
	  3	2 1 2 3
	4 3 2 1 2 3 4
  5 4 3 2 1 2 3 4 5

   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve1() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows - i; j++) {
			cout << "  ";
		}
		for (int j = i; j >= 1; j--) {
			cout << j << " ";
		}
		for (int j = 2; j <= i; j++) {
			cout << j << " ";
		}

		cout << endl;
	}
}

void solve2() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		int j;
		for (j = 1; j <= rows - i; j++) {
			cout << "  ";
		}
		int k = i;
		for (; j <= rows; j++) {
			cout << k-- << " ";
		}
		k = 2;
		for (; j <= rows + i - 1; j++) {
			cout << k++ << " ";
		}
		cout << endl;
	}
}


int main() {
	solve1();
	solve2();

	return 0;
}