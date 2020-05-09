#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    vector <int> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (5 - v[i] < k)
            break;
        count += 1;
    }

    cout << count / 3 <<endl;
    return 0;
}