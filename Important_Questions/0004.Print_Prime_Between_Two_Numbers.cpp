/*
	DESC : Print Prime Between Two Numbers
	
	HINT  : a whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1 
				(e.g. 2, 3, 5, 7, 11)
	
	
	INPUT :
		20 40
			23
			29
			31
			37
		MAKE THE CODE VICE VERSA TRUE, EXAMPLE 
		40 20
			23
			29
			31
			37
	
	BY : MRUNAL NIRAJKUMAR SHAH
*/



#include <iostream>
#include <cmath>

using namespace std;

int is_prime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return 0;
		}
	}
	return 1;
}

void max_min(int& num1, int& num2) {
	if (num2 < num1) {
		int temp = num2;
		num2 = num1;
		num1 = temp;
	}
}

void solve() {
	int number1, number2;
	cout << "Enter Number 1 : ";
	cin >> number1;
	cout << "Enter Number 2 : ";
	cin >> number2;

	max_min(number1, number2);

	for (int i = number1; i <= number2; i++) {
		if (is_prime(i)) {
			cout << i << endl;
		}
	}
}


int main() {
	solve();

	return 0;
}