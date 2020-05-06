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
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++) {
        int k, l, m;
        cin >> k >> l >> m;
        x += k;
        y += l;
        z += m;
    }

    //cout << x << " " << y << " " << z << endl;

    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}