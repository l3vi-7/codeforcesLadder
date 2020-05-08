#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << endl;
    else {
        int ans = (n/m) * b + min((n%m) * a, b);
        cout << ans << endl;
    }
    return 0;
}