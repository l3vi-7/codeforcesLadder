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
    set<int> v;
    cin >> n;
    for (int i = 0 ; i < 3; i++) {
        int k;
        cin >> k;
        v.insert(k);
    }
    vector <int> count (n + 1, INT_MIN);
    count[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        for (auto j : v) {
            if (i - j >= 0) {
                count[i] = max(count[i], count[i - j] + 1);
                //cout << i << " " << i - j << " " << count[i]<<endl;
            }
        }
    }
    cout << count[n] <<endl;
    return 0;
}