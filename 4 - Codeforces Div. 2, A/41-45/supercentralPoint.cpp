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
    vector <pair <int, int>> corordinates(n);
    for (int i = 0; i < n; i++) {
        int k, l ;
        cin >> k >> l;
        corordinates[i].first = k;
        corordinates[i].second = l;
    }
    int count = 0;
    //cout << endl << endl;
    for (auto i : corordinates) {
        bool gtx = false, ltx = false, gty = false, lty = false;
        //cout << i.first << " " << i.second <<endl;
        for (auto j : corordinates) {
            if (j.first > i.first && i.second == j.second)
                gtx = true;
            else if (j.first < i.first && i.second == j.second)
                ltx = true;
            else if (j.first == i.first && i.second < j.second)
                gty = true;
            else if (j.first == i.first && i.second > j.second)
                lty = true;
        }
        if (gtx && ltx && gty && lty)
            count += 1;
    }

    cout << count <<endl;
    return 0;
}