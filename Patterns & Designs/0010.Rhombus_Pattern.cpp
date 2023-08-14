/*
   DESC : Rhombus Pattern
		 4
	   ****
	  ****
	 ****
	****

   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve1() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = rows - i; j >= 1; j--) {
			cout << " ";
		}
		for (int j = 1; j <= rows; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void solve2() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= rows - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= rows; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
}

int main() {
	solve1();
	solve2();

	return 0;
}