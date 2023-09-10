/*
	DESC : A. Vanya and Fence
		CODEFORCE : https://codeforces.com/contest/677/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, h;
	cin >> n >> h;
	
	int w = 0;
	int f;
	for(int i = 0; i < n; i++) {
		cin >> f;

		if(f > h) {
			w = w + 2;
		}else {
			w = w + 1;
		}
	}
	cout << w << endl;
}

int main() {
	solve();

	return 0;
}
