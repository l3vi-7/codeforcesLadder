#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll m = -2000000000, M = 2000000000;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s, c;
        ll k;
        cin >> s >> k >> c;
        if (s == ">" ) {
            if (c == "Y") {
                if (k + 1 > m)
                    m = k + 1;
            } else {
                if (M > k)
                    M = k;
            }
        } else if (s == ">=") {
            if (c == "Y") {
                if (k > m)
                    m = k;
            } else {
                if (M > k - 1)
                    M = k - 1;
            }
        } else if (s == "<" ) {
            if (c == "Y") {
                if (M > k - 1)
                    M = k - 1;
            } else {
                if (k > m)
                    m = k;
            }
        } else if (s == "<=") {
            if (c == "Y") {
                if (M > k)
                    M = k;
            } else {
                if (k + 1 > m)
                    m = k + 1;
            }
        }
    }
    if (M < m) {
        cout << "Impossible" << endl;
    } else {
        cout << m  << endl;
    }
    return 0;
}