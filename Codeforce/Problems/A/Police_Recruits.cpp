/*
	DESC : A. Police Recruits
		CODEFORCE : https://codeforces.com/contest/427/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int cr;
	int count = 0;
	int police = 0;
	for(int i = 0; i < n; i++) {
		cin >> cr;
		if(cr > 0) {
			police = police + cr;
		}else {
			if(police == 0) {
				count++;
			}else {
				police--;
			}
		}
	}
	cout << count << endl;

}

int main() {
	solve();

	return 0;
}
