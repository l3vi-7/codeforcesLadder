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
    vector <int> p (n);
    for (int i = 0; i < n; i++) {
        cin >> p.at(i);
    }
    int tt = INT_MAX;
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0;  j < p[i]; j++) {
            int k;
            cin >> k;
            t += k * 5 + 15;
        }
        if (tt > t) {
            tt = t;
        }
    }

cout << tt << endl;



    return 0;
}