/*
	DESC : A. Stones on the Table
		CODEFORCE : https://codeforces.com/contest/266/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;

	cin >> s;
	int count = 0;

	for(int i = 0; i < n; i++) {
		if(i < n && s[i] == s[i+1]) {
			count++;
		}
	}
	cout << count << endl;
}

int main() {
	solve();

	return 0;
}
