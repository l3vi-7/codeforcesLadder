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
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << -1 <<endl;
        return 0;
    }
    vector <int> v (n + 1);
    for (int i = 1 ; i < n + 1; i++) v[i] = i;

    for (int i = 1; i < n; i += 2) {
        int temp = v[i];
        v[i] = v[i + 1];
        v[i + 1] = temp;
    }

    for (int i = 1; i < n + 1; i++) {
        cout << v[i] << " ";
    }
    cout <<endl;

    return 0;
}