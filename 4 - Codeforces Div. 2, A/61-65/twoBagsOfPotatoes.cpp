#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll y, k, n;
    cin >> y >> k >> n;
    ll x = k - (y % k);
    ll limit = n - y;

    if (x <= limit) {
        
        cout << x  << " ";
        x += k;

        while (x <= limit) {
            cout << x << " ";
            x += k;
        }
    } else {
        cout << -1;
    }
    cout << endl;

    return 0;
}