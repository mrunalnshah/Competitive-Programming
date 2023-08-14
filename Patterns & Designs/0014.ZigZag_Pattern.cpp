/*
   DESC : Zig-Zag Pattern
		Number of Stars : 9
		*       *			--> 1,3 | 1,7				--> (i + j) % 4 == 0
	  *   *   *   *			--> 2,2 | 2,4 | 2,6 | 2,8	--> (i + j) % 4 == 0 || (i == 2 && j % 4 == 0)
	*       *       *		--> 3,1 | 3,5 | 3,9			--> (i + j) % 4 == 0
   SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

void solve() {
	int number_of_stars;

	cout << "Enter Number of Stars : ";
	cin >> number_of_stars;

	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= number_of_stars; j++) {
			if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;
}