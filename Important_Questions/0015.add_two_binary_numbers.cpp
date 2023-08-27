/*
	DESC : Add two binary Numbers

	HINT :


	INPUT :
		Enter binary 1 : 11011
		Enter binary 2 : 10111
		11001

	BY : MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

int reverse(int number) {
	int reverse_number = 0;
	while (number > 0) {
		int lastDigit = number % 10;
		reverse_number = reverse_number * 10 + lastDigit;
		number = number / 10;
	}
	return reverse_number;
}
 
int add_Binary(int binary1, int binary2) {
	int sum = 0;
	int prev_Carry = 0;

	while (binary1 > 0 && binary2 > 0) {
		if (binary1 % 2 == 0 && binary2 % 2 == 0) {
			sum = sum * 10 + prev_Carry;
			prev_Carry = 0;
		}
		else if ((binary1 % 2 == 0 && binary2 % 2 == 1) || (binary1 % 2 == 1 && binary2 % 2 == 0)) {
			if (prev_Carry == 1) {
				sum = sum * 10 + 0;
				prev_Carry = 1;
			}
			else {
				sum = sum * 10 + 1;
				prev_Carry = 0;
			}
		}
		else {
			sum = sum * 10 + prev_Carry;
			prev_Carry = 1;
		}
		binary1 = binary1 / 10;
		binary2 = binary2 / 10;
	}
	while (binary1 > 0) {
		if (prev_Carry == 1) {
			if (binary1 % 2 == 1) {
				sum = sum * 10 + 0;
				prev_Carry = 1;
			}
			else {
				sum = sum * 10 + 1;
				prev_Carry = 0;
			}
		}
		else {
			sum = sum * 10 + (binary1 % 2);
		}
		binary1 = binary1 / 10;
	}

	while (binary2 > 0) {
		if (prev_Carry == 1) {
			if (binary2 % 2 == 1) {
				sum = sum * 10 + 0;
				prev_Carry = 1;
			}
			else {
				sum = sum * 10 + 1;
				prev_Carry = 0;
			}
		}
		else {
			sum = sum * 10 + (binary2 % 2);
		}
		binary2 = binary2 / 10;
	}

	if (prev_Carry == 1) {
		sum = sum * 10 + 1;
	}

	sum = reverse(sum);

	return sum;
}

int main() {
	int binary1, binary2;

	cout << "Enter binary 1 : ";
	cin >> binary1;

	cout << "Enter binary 2 : ";
	cin >> binary2;

	cout << add_Binary(binary1, binary2) << endl;



}