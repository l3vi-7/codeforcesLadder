#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    int t = k - (2 * n);
    if (t <= n)
        cout << n - t << endl;
    else
        cout << 0 << endl;
    return 0;
}