/*
	DESC : A. Team
		CODEFORCE : https://codeforces.com/contest/231/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int p, v, t;
	int count = 0;
	for(int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		if((p == 1 && v == 1) || (p == 1 && t == 1) || (v == 1 && t == 1)) {
			count++;
		}
	}
	cout << count << endl;
}

int main() {

	solve();

	return 0;
}
