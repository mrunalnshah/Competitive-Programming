/*
	DESC : Inverted Half Pyramid
		5
		* * * * *
		* * * *
		* * *
		* *
		*
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve1() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = rows - i + 1; j >= 1; j--) {
			cout << "* ";
		}
		cout << endl;
	}
}

void solve2() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = rows; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	solve1();
	solve2();
	
	return 0;

}