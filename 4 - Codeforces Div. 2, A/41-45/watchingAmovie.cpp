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
    int n, x;
    cin >> n >> x;
    int time = 1, watch = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        while (time + x <= l)
            time += x;
        watch += r - time + 1;
        time = r + 1;

        
    }
    cout << watch<<endl;

    return 0;
}