/*
	DESC : Octal To Decimal

	HINT :

	1     7
	8^1  8^0  == 15


	INPUT :
		17
			15


	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

int octalTodecimal(int octal) {
	int decimal = 0;
	int power_8 = 1;

	while (octal > 0) {
		int remainder = octal % 10;
		decimal = decimal + power_8 * remainder;
		power_8 = power_8 * 8;
		octal = octal / 10;
	}
	return decimal;
}

void solve() {
	int octal;
	cout << "Enter Octal Number : ";
	cin >> octal;

	cout << octalTodecimal(octal) << endl;
}


int main() {
	solve();
	
	return 0;
}