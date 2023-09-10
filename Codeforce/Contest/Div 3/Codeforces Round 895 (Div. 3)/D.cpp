#include <bits/stdc++.h>


using namespace std;

long long gcd(long long  a, long long  b) {
    if (b == 0) {
        return a;
	}
    return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    long long n,x,y;
    cin >> n >> x >> y;
    long long Lcm=lcm(x,y);
    long long a = ( n / x ) - ( n / Lcm );
    long long b = ( n / y ) - ( n / Lcm );
    long long val2 = ( b * ( b + 1 ) ) / 2;
    long long val1 = ( n * ( n + 1 ) ) / 2 - ( ( n - a ) * ( n - a + 1 ) ) / 2;

    cout << val1 - val2 << endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
}