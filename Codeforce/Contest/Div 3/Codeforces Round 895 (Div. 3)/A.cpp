#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c;

    cin >> a >> b >> c;

    if(a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int count = 0;
    while(a != b) {
        if(c > a && c > b) {
            count++;
            break;
        }
        a = a - c;
        b = b + c;
        count++;
        if(b > a) {
            break;
        }
    }
    cout << count << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
