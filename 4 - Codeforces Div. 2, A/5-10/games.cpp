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
    vector <int> h(n), g(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        cin >> g[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (h[i] == g[j])
                    count+=1;
            }
        }
    }

    cout << count << endl;

    return 0;
}