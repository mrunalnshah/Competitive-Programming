/*
	DESC : A. Magnets
		CODEFORCE : https://codeforces.com/contest/344/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int m_p, m_c;
	cin >> m_p;
	int group = 1;
	for(int i = 0; i < n-1; i++) {
		cin >> m_c;
		if(m_c == m_p) {
			continue;
		}else {
			m_p = m_c;
			group++;
		}
	}
	cout << group << endl;
}

int main() {
	solve();

	return 0;
}
