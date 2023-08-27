/*
	DESC : Factorial of a number  

	HINT : Factorial of a positive integer (number) is the sum of multiplication of all the integers smaller than that positive integer.

	INPUT :
		4
			24
			HOW ? 4 * 3 * 2 * 1 = 24
		
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
	int number;

	cout << "Enter Number : ";
	cin >> number;

	cout << "Factorial of " << number << " is " << factorial(number) << endl;
}


int main() {
	solve();

	return 0;
	}