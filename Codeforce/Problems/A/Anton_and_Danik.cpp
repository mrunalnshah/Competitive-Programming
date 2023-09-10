/*
	DESC : A. Anton and Danik
		CODEFORCE : https://codeforces.com/contest/734/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	char g;

	int a = 0, d = 0;
	for(int i = 0; i < n; i++) {
		cin >> g;
		if(g == 'A') {
			a++;
		}else {
			d++;
		}
	}
	if(a > d) {
		cout << "Anton";
	}else if (a < d){
		cout << "Danik";
	}else {
		cout << "Friendship";
	}
}


int main() {
	solve();

	return 0;
}
