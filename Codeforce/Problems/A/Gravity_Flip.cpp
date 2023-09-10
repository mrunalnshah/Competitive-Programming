/*
	DESC : A. Gravity Flip
		CODEFORCE : https://codeforces.com/contest/405/problem/A
	
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
	sort(arr,arr + n);
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main() {
	solve();

	return 0;
}
