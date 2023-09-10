/*
	DESC : A. Petya and Strings
		CODEFORCE : https://codeforces.com/contest/112/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

int solve() {
	string a, b;
	cin >> a >> b;

	int size;
	if(a.size() >= b.size()) {
		size = a.size();
	}else {
		size = b.size();
	}

	for(int i = 0; i < size; i++) {
		if(a[i] >= 'a') {
			a[i] = a[i] - 32; 
		}
		if(b[i] >= 'a') {
			b[i] = b[i] - 32;
		}
		if(a[i] == b[i]) {
			continue;
		}else if(a[i] > b[i]) {
			return 1;
		}else {
			return -1;
		}
	}
	return 0;
	
}

int main() {

	int result = solve();
	
	cout << result << endl;

	return 0;
}
