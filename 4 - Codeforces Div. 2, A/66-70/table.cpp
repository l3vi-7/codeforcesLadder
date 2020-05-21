#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    int one;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> one;
            if (one == 1) {
                if (i == 0 || i == (n - 1) || j == 0 || j == (m - 1)) {
                    cout << 2 << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << 4 << endl;

    return 0;
}