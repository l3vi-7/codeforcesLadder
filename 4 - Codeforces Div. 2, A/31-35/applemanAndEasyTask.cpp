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
    vector <vector <char>> v (n, vector <char> (n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int count = 0;
            if (i - 1 >= 0) {
                if (v[i - 1][j] == 'o')
                    count += 1;
            } 
            if (i + 1 <= n - 1) {
                if (v[i + 1][j] == 'o')
                    count += 1;
            } 
            if (j - 1 >= 0) {
                if (v[i][j - 1] == 'o')
                    count += 1;
            } 
            if (j + 1 <= n - 1) {
                if (v[i][j + 1] == 'o')
                    count += 1;
            } 

            if (count % 2 != 0) {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;

    return 0;
}