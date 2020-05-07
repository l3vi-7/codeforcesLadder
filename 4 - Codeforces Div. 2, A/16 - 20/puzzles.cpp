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
    vector <int> v (m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vector <int>diff;
    for (int i = 0; i + n - 1 < m; i++) {
        diff.push_back(v[n + i - 1] - v[i]);
    }

    int min_ele = INT_MAX;
    for (int i = 0; i < diff.size(); i++) {
        if (min_ele > diff[i])
            min_ele = diff[i];
    }

    cout << min_ele << endl;
    return 0;
}