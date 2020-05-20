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

    map <int, int> mp;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        mp[k] += 1;
    }

    int max = 0;

    for (auto i : mp) {
        if (max == 0)
            max = i.second;
        else {
            if (i.second > max)
                max = i.second;
        }
    }

    if (n % 2 == 0) {
        if (max <= (n/2))
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    } else {
        if (max <= (n/2) + 1)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }

    return 0;
}