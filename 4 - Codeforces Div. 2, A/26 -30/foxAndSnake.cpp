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
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = 1; j <= m; j++) {
                if (j == 1) {
                    if (i % 4 == 0)
                        cout << "#";
                    else
                        cout << ".";
                } else if (j == m) {
                    if (i % 2 == 0 &&  i % 4 != 0)
                        cout << "#";
                    else
                        cout << ".";
                } else  
                    cout << ".";
            }
            cout << endl;
        } else {
            for (int i = 1; i <= m; i++) {
                cout << "#";
            }
            cout << endl;
        }
    }

    return 0;
}