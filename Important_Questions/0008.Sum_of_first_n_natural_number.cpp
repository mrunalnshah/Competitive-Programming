/*
	DESC : Sum of first n natural number

	HINT : S = 1 + 2 + 3 + ... + n
			S = (n * (n + 1))/2

	INPUT :
		10
			S == 55;
		
	BY MRUNAL NIRAJKUMAR SHAH
*/

#include <iostream>

using namespace std;

//Solve2 is faster than Solve1 because it uses a well defined formula

void solve1() {
	int number;
	int sum = 0;

	cout << "Enter Number : ";
	cin >> number;

	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}

	cout << "Sum : " << sum << endl;

}

void solve2() {
	int number;
	int sum = 0;

	cout << "Enter Number : ";
	cin >> number;

	sum = (number * (number + 1)) / 2;

	cout << "Sum : " << sum << endl;

}

int main() {
	solve1();
	solve2();
	
	return 0;
}