#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n;
    cin >> n;
    vector <int> tc (n);
    for (int i = 0; i < n; i++)
        cin >> tc[i];
    sort (tc.begin(), tc.end());
    if (tc[0] != 1) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++) {
        if (tc[i + 1] - tc[i] > 1) {
            cout << tc[i] + 1 << endl;
            return 0;
        }
    }
    cout << tc[n - 1] + 1 << endl;
    return 0;
}