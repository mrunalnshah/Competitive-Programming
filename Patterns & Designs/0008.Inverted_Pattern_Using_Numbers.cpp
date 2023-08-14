/*
   DESC : Inverted Pattern Using Numbers
		 5
	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1

   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve1() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = rows; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}
void solve2() {
	int rows;

	cout << "Enter rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows + 1 - i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
}


int main() {
	solve1();
	solve2();

	return 0;
}