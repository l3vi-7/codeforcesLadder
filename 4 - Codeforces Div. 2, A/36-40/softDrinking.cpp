#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n,k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml = k * l;
    int total_slices = c * d;
    int min_toast = min (total_ml / nl, total_slices);
    min_toast = min(min_toast, p / np);

    cout << min_toast / n <<endl;

    return 0;
}