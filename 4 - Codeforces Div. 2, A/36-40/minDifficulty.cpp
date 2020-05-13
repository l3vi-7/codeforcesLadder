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
    vector <int> v(n), diff (n - 1);
    int min_diff = INT_MAX,max_diff = INT_MIN;

    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 1; i < n; i++) {
        int k = v[i] - v[i - 1];
        diff[i] = k;
        max_diff = max(max_diff, k);
    }

    //for (auto i : diff)
      //  cout << i <<endl;
    for (int i = 2; i < n; i++) {
        min_diff = max(min(min_diff, diff[i] + diff[i - 1]), max_diff);
    }

    cout << min_diff <<endl;


    return 0;
}