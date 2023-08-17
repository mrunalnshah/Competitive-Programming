/*
	DESC : Reverse A Given Number
	
	Input :
		123
			321
		458
			854
	
	
	BY : Mrunal Nirajkumar Shah
*/


#include <iostream>
#include <cmath>

using namespace std;

// SOLVE1 is BETTER THAN SOLVE2 BECAUSE IT WORKS DIRECTLY ON NUMBERS.


void solve1() {
	int number;
	int reverse_number = 0;

	cout << "Enter Number : ";
	cin >> number;

	while (number > 0) {
		int remainder = number % 10;
		reverse_number = reverse_number * 10 + remainder;
		number = number / 10;
	}
	cout << reverse_number << endl;
}

void solve2() {
	std::string number;
	cout << "Enter Number : ";
	cin >> number;

	for (int i = number.size(); i >= 0; i--) {
		cout << number[i];
	}
}

int main() {
	solve1();
	solve2();

	return 0;
}