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
    string kyubeat[4];
    map <int, int> mp;
    
    for (int j = 0; j < 4; j++)
            cin >> kyubeat[j];
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            if (kyubeat[i][j] != '.')
                mp[kyubeat[i][j]] += 1;
    }

    for (auto i : mp) {
        if (i.second > 2 * n) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}