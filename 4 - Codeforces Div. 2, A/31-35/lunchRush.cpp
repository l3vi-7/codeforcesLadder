#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n, k;
    cin >> n >> k;
    ll max_joy = INT_MIN;
    for (ll i = 0; i < n; i++) {
        ll t, f;
        cin >> f >> t;

        ll joy;
        if (t>k)
            joy = f - (t - k);
        else
            joy = f;

        if (joy > max_joy)
            max_joy = joy;
    }

    cout << max_joy <<endl;
    return 0;
}