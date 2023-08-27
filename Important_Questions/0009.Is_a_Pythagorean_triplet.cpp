/*
	DESC : Check if 3 sides are pythagorean triplet

	HINT :  side1 * side1 == side2 * side2 + side3 * side3 ||
			side2 * side2 == side1 * side1 + side3 * side3 ||
			side3 * side3 == side1 * side1 + side2 * side2
			

	INPUT :
		3 4 5
			IS A TRIPLET
		3 4 6
			NOT A TRIPLET
		
	BY MRUNAL NIRAJKUMAR SHAH
*/


#include <iostream>

using namespace std;

int check_pythagorean_triplet(int side1, int side2, int side3) {
	if (side1 * side1 == side2 * side2 + side3 * side3 ||
		side2 * side2 == side1 * side1 + side3 * side3 ||
		side3 * side3 == side1 * side1 + side2 * side2) {
		return 1;
	}
	return 0;
}


void solve() {
	int side1, side2, side3;

	cout << "Enter Side 1 :";
	cin >> side1;
	cout << "Enter Side 2 :";
	cin >> side2;	
	cout << "Enter Side 3 :";
	cin >> side3;


	if (check_pythagorean_triplet(side1, side2, side3)) {
		cout << "IS A TRIPLET." << endl;
	}
	else {
		cout << "NOT A TRIPLET." << endl;
	}
}


int main() {
	solve();
	
	return 0;
}