/*
	DESC : A. Sereja and Dima
		CODEFORCE : https://codeforces.com/contest/381/problem/A
	
	SOLUTION BY : MRUNAL NIRAJKUMAR SHAH
*/ 

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int s = 0, d = 0;
	
	int turn = 0;
	int i = 0;
	int j = n - 1;
	while(i <= j) {
		if(turn % 2 == 0) {
			if(arr[i] > arr[j]) {
				s = s + arr[i];
				i++;
			}else {
				s = s + arr[j];
				j--;
			}
			turn++;
		}else {
			if(arr[i] > arr[j]) {
				d = d + arr[i];
				i++;
			}else {
				d = d + arr[j];
				j--;
			}
			turn++;
		}
	}

	cout << s << " " << d << endl;

}

int main() {
	solve();

	return 0;
}
