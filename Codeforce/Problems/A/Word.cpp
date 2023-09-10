/*
	DESC : A. Word
		CODEFORCE : https://codeforces.com/contest/59/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;

	int ucase = 0, lcase = 0;
	for(int i = 0; i < s.size(); i++) {
		if(isupper(s[i])) {
			ucase++;
		}else {
			lcase++;
		}
	}
	if(lcase >= ucase) {
		transform(s.begin(),s.end(),s.begin(),::tolower);
	}else {
		transform(s.begin(),s.end(),s.begin(),::toupper);
	}

	cout << s << endl;
}

int main() {
	solve();

	return 0;
}
