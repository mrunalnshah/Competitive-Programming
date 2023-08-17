/*
	DESC : Check if a number is Prime
	
	HINT  : a whole number greater than 1 that cannot be exactly divided by any whole number other than itself and 1 
				(e.g. 2, 3, 5, 7, 11)
	
	
	INPUT :
		12
			Non-Prime
		
		7
			Prime
	
	BY : MRUNAL NIRAJKUMAR SHAH
*/



#include <iostream>
#include <cmath>  // for sqrt() function
 
using namespace std;

void solve() {
	int number;
	bool flag = 0;

	cout << "Enter Number : ";
	cin >> number;

	for (int i = 2; i <= sqrt(number); i++) {
		// i <= number/2 is less effective approach
		if (number - i * (number / i) == 0) {
			flag = 1;
			break;
		}
	}


	if (flag == 0) {
		cout << "Prime" << endl;
	}
	else {
		cout << "Non-Prime" << endl;
	}

}

int main() {
	solve();

	return 0;
}