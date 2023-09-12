#include <bits/stdc++.h>

using namespace std;

 
int d(char a,char b) {
	if(a>b){
		swap(a,b);
	}
	return min(b-a,26-b+a);
}
 
int main() {
	int rot;
	string s;
	cin >> s;

	rot+=d('a',s[0]);
	
	for(int i=1;i<s.size();i++) {
		rot+=d(s[i],s[i-1]);
	}
	
	cout << rot << endl;
	
	return 0;
}
