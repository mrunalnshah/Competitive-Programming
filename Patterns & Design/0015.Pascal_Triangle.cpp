/*
	DESC : Pascal Triangle 

	HINT : Pascal's triangle is a triangular array of the binomial coefficients arising in probability theory, combinatorics, and algebra.
		iCj

		4
		0C0
		1C0 1C1
		2C0 2C1 2C2
		3C0 3C1 3C2 3C3
		4C0 4C1 4C2 4C3 4C4


	INPUT :
		5

		1
		1 1
		1 2 1
		1 3 3 1
		1 4 6 4 1
		
	BY MRUNAL NIRAJKUMAR SHAH
*/


#include <iostream>

using namespace std;

int factorial(int number) {
	int factorial_of_number = 1;
	for (int i = number; i >= 1; i--) {
		factorial_of_number = factorial_of_number * i;
	}
	return factorial_of_number;
}


void solve() {
	int rows;

	cout << "Enter Rows : ";
	cin >> rows;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= i; j++) {
			int i_factorial = factorial(i);
			int j_factorial = factorial(j);
			int i_j_factorial = factorial(i - j);

			int iCj = i_factorial / (j_factorial * i_j_factorial);

			cout << iCj << " ";
		}
		cout << endl;
	}
}


int main() {
	solve();

	return 0;
	}