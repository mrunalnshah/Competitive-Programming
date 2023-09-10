/*
	DESC : A. Boy or Girl
		CODEFORCE : https://codeforces.com/contest/236/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	int count = 0;

	unordered_map <char,int> map;
	for(int i = 0; i < s.size(); i++) {
		if(map.find(s[i]) != map.end()) {
			continue;
		}
		map[s[i]]++;
		count++;
	}
	if(count % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	}else {
		cout << "IGNORE HIM!" << endl;
	}
}

int main() {
	solve();

	return 0;
}
