/*
	DESC : Binary To Decimal
	
	HINT : 
	
	1    0    1
	2^2  2^1  2^0  == 5
	
	
	INPUT :
		101
			5
			
	
	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

int binaryTodecimal(int binary) {
	int decimal = 0;
	int power_2 = 1;

	while (binary > 0) {
		int remainder = binary % 10;
		decimal = decimal + power_2 * remainder;
		power_2 = power_2 * 2;
		binary = binary / 10;
	}
	return decimal;
}

void solve() {
	int binary;
	cout << "Enter Binary Number : ";
	cin >> binary;

	cout << binaryTodecimal(binary) << endl;
}


int main() {
	solve();
	
	return 0;
}