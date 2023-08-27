/*
	DESC : Decimal To Octal

	HINT :


	INPUT :
		100
			144

	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

int decimalTooctal(int decimal) {
	int power_ = 1;
	int octal = 0;

	while (power_ <= decimal) {
		power_ = power_ * 8;
	}
	power_ = power_ / 8;

	while (power_ > 0) {
		int lastDigit = decimal / power_;
		decimal = decimal - (lastDigit * power_);
		power_ = power_ / 8;
		octal = octal * 10 + lastDigit;
	}
	return octal;
}

void solve() {
	int decimal;
	cout << "Enter Decimal Number : ";
	cin >> decimal;

	cout << decimalTooctal(decimal) << endl;
}


int main() {
	solve();
	
	return 0;
}