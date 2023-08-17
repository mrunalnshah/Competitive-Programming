/*
	DEC : Check if a number is Armstrong or Not.
		HINT : Armstrong number is a number that is equal to the sum of cubes of its digits. 
				For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	
	INPUT :
		370
			Armstrong
			
		398
			Non-Armstrong
		
	
	BY : MRUNAL NIRAJKUMAR SHAH

*/


#include <iostream>

using namespace std;

void solve() {
	int number;
	int check_Armstrong = 0;
	
	cout << "Enter Number : ";
	cin >> number;

	int temp_Original = number;
	while (temp_Original > 0) {
		int remainder = temp_Original % 10;
		check_Armstrong = (remainder * remainder * remainder) + check_Armstrong;
		temp_Original = temp_Original / 10;
	}
	if (check_Armstrong == number) {
		cout << "Armstrong" << endl;
	}
	else {
		cout << "Non-Armstrong" << endl;
	}
}
	

int main() {
	solve();

	return 0;
}