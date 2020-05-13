#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int m, n;
    cin >> m >> n;
    vector <string> s;
    vector <bool> rows(m, false), cols(n, false);

    for (int i = 0; i < m; i++) {
        string sk;
        cin >> sk;
        s.push_back(sk);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == 'S') {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    int cells = 0, num_rows = 0, num_cols = 0;
    for (int i = 0; i < m; i++) {
        //cout << rows[i] <<endl;
        if (rows[i]) {
            num_rows += 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (cols[i]) {
            num_cols += 1;
        }
    }
    //cout << num_cols << " " << num_rows <<endl;
    cout << m * n - (num_rows * num_cols) <<endl;

    return 0;
}