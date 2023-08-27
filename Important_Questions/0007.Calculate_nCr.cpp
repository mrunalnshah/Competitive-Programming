/*
	DESC : Calculate_nCr  

	HINT : nCr = n! / r! * (n – r)!

	INPUT :
		n r
		5 2
			5C2 = 10
			HOW ? 5! / (2! * 3!) == 120/ 12 == 10
		
	BY MRUNAL NIRAJKUMAR SHAH
*/


#include <iostream>
#include <cmath>

using namespace std;

int factorial(int number) {
	int factorial_of_number = 1;
	for (int i = number; i >= 1; i--) {
		factorial_of_number = factorial_of_number * i;
	}
	return factorial_of_number;
}


void solve() {
	int n, r;

	cout << "Enter n : ";
	cin >> n;

	cout << "Enter r : ";
	cin >> r;

	int n_factorial = factorial(n);
	int r_factorial = factorial(r);
	int n_r_factorial = factorial(n - r);

	int ncr = n_factorial / (r_factorial * n_r_factorial);

	cout << n << "C" << r << " is " << ncr << endl;
}


int main() {
	solve();

	return 0;
	}