#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n, m;
    cin >> n >> m;
    ll count_1 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k == 1)
            count1 += 1;
        else
            count_1 += 1;
    }

    for (int i = 0; i < m; i++) {
        ll l, r;
        cin >> l >> r;
        if ((r - l) % 2 == 0) {
            cout << 0 << endl;
        } else {
            int len = r + 1 - l;
            if (count1 >= len / 2 && count_1 >= len / 2)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }

    }
    return 0;
}