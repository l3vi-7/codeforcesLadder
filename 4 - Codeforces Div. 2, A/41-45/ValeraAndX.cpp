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
    vector <string> str (n);
    bool flag = true;
    for (int i = 0; i < n; i++) cin >> str[i];
    char diag = str[0][0], other = str[1][0];
    //cout << diag << " " << other <<endl;
    if (diag == other)
        flag = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j) {
                if (str[i][j] != diag) {
                    //cout << i << " " << j << " " << str[i][j] <<endl;
                    flag = false;
                    break;
                }
            } else {
                if (str[i][j] != other) {
                    //cout << i << " " << j << " " << str[i][j] <<endl;
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
            break;
    }
    if (!flag)
        cout << "NO" << endl;
    else {
        cout << "YES" << endl;
    }
    return 0;
}