#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long n;
    cin>>n;

    long long a[n];
    for(long long i=0;i<n;i++) {
        cin >>a[i];
    }

    string s;
    cin >> s;

    vector<int>x(n+1,0);
    int b = 0, c = 0;
    for(long long i = 0; i < n; i++) {
        x[i+1] = x[i] ^ a[i];
        if(s[i]=='0') {
            b ^= a[i];
        }else{
            c ^= a[i];
        }
    }
    long long q;
    cin >> q;
    while(q--){
        long long t;
        cin >> t;
        long long po,qo;
        if(t == 1){
            cin >> po >> qo;
            c=(c ^ x[qo] ^ x[po - 1]);
            b=(b ^ x[qo] ^ x[po - 1]);
        }else {
            cin >> po;
            if(po == 0){
                cout << b;
            }
            else {
                cout<<c;
            }
            cout<<" ";
        }
    }
    cout <<	endl;
}

int main(){
    int t;
    cin>>t;

    while(t--) {
        solve();
    }

    return 0;
}