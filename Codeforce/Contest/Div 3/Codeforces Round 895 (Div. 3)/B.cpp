#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int d[n], s[n], rez = INFINITY;

    for(int i = 0; i < n; i++) {
        cin >> d[i] >> s[i];
    }
    for(int i = 0; i < n; i++) {
        if(s[i] >= 3) {
            if(s[i] % 2 == 1) {
                rez = min(rez, d[i] + (s[i]/2));
            }else {
                rez = min(rez, d[i] + (s[i]/2 - 1));
            }
        }else {
            rez = min(rez, d[i]);
        }
    }
      cout << rez << endl;

}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}