#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

ll gcd(ll a, ll b) {
    ll m, n;
    m = max(a, b);
    n = min(a, b);
    if (m % n == 0)
        return n;
    else {
        return gcd(n, m % n);
    }
}

int main()
{
    IOS;
    ll a, b;
    cin >> a >> b;
    if (b - a + 1 < 3) {
        cout << -1 << endl;
        return 0;
    }

    if (a % 2 == 0) {
        cout << a << " " << a + 1 << " " << a + 2 << endl;
        return 0;
    }

    if (b - a + 1 > 3) {
        cout << a + 1 << " " << a + 2 << " " << a + 3 <<endl;
        return 0;
    }

    cout << -1 <<endl;
    return 0;
}