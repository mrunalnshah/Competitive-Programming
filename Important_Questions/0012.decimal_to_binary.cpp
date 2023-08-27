/*
	DESC : Decimal To Binary

	HINT :


	INPUT :
		5
			101

	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

int decimalTobinary(int decimal) {
	int power_ = 1;
	int binary = 0;

	while (power_ <= decimal) {
		power_ = power_ * 2;
	}
	power_ = power_ / 2;

	while (power_ > 0) {
		int lastDigit = decimal / power_;
		decimal = decimal - (lastDigit * power_);
		power_ = power_ / 2;
		binary = binary * 10 + lastDigit;
	}
	return binary;
}

void solve() {
	int decimal;
	cout << "Enter Decimal Number : ";
	cin >> decimal;

	cout << decimalTobinary(decimal) << endl;
}


int main() {
	solve();
	
	return 0;
}