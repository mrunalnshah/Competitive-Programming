/*
	DESC : A. Bear and Big Brother
		CODEFORCE : https://codeforces.com/contest/791/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	

	int count = 0;
	while(a <= b) {
		a = a * 3;
		b = b * 2;
		count++;
	}

	cout << count << endl;
}

int main() {
	solve();


	return 0;
}
