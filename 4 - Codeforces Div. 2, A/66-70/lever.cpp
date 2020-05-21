#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s;
    cin >> s;
    ll left = 0, right  = 0;
    vector <ll> l, r;
    ll pivot = -1;
    ll n = s.size();
    for (ll i = 0; i < n; i++) {
        if (s[i] == '^')
            pivot = i;
        else if (s[i] != '=' && pivot == -1) {
            l.push_back(i);
        } else if (s[i] != '=' && pivot != -1) {
            r.push_back(i);
        }
    }

    for (auto i : l) {
        left += (pivot - i) * (ll)(s[i] - '0');
    }

    for (auto i : r) {
        right += (-pivot + i) * (ll)(s[i] - '0');
    }

    //cout << left << " " << right << endl;

    if (right > left)
        cout << "right" << endl;
    else if (right < left)
        cout << "left" << endl;
    else
        cout << "balance" << endl;




    return 0;
}