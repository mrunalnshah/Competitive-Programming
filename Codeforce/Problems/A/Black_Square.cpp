/*
	DESC : A. Black Square
		CODEFORCE : https://codeforces.com/contest/431/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	string s;
	cin >> s;
	
	int cal = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '1') {
			cal = cal + a;	
		}else if(s[i] == '2') {
			cal = cal + b;
		}else if(s[i] == '3') {
			cal = cal + c;
		}else {
			cal = cal + d;
		}
	}
	cout << cal << endl;	
}

int main() {
    solve();

    return 0;
}
