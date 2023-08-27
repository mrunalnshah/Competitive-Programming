/*
	DESC : Decimal To hexadecimal

	HINT :


	INPUT :
		100
			64

	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>
#include <string>

using namespace std;

string decimalTohexadecimal(int decimal) {
	int power_ = 1;
	string hexadecimal = "";

	while (power_ <= decimal) {
		power_ = power_ * 16;
	}
	power_ = power_ / 16;

	while (power_ > 0) {
		int lastDigit = decimal / power_;
		decimal = decimal - (lastDigit * power_);
		power_ = power_ / 16;
		if (lastDigit <= 9) {
			hexadecimal = hexadecimal + to_string(lastDigit);
		}
		else {
			char temp_A_F = 'A' + lastDigit - 10;
			hexadecimal.push_back(temp_A_F);
		}
	}
	return hexadecimal;
}

void solve() {
	int decimal;
	cout << "Enter Decimal Number : ";
	cin >> decimal;

	cout << decimalTohexadecimal(decimal) << endl;
}


int main() {
	solve();
	
	return 0;
}