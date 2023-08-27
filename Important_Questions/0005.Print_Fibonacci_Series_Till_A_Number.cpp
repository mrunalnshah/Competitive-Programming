/*
	DESC : Print Fibonacci Series 

	HINT : The fibonacci series numbers are given as: 0, 1, 1, 2, 3, 5, 8, 13, 21, 38, . . . 
			In a Fibonacci series, every term is the sum of the preceding two terms, starting from 0 and 1 as 
			the first and second terms. 

	INPUT :
		30
			0
			1
			1
			2
			3
			5
			8
			13
			21
		
	BY MRUNAL NIRAJKUMAR SHAH
*/


#include <iostream>
#include <cmath>

using namespace std;



void solve() {
	int number;

	cout << "Enter Number : ";
	cin >> number;

	int first_term = 0;
	int second_term = 1;
	int third_term = 0;

	while (first_term <= number) {
		third_term = first_term + second_term;
		cout << first_term << endl;
		first_term = second_term;
		second_term = third_term;
	}
	

}


int main() {
	solve();

	return 0;
	}