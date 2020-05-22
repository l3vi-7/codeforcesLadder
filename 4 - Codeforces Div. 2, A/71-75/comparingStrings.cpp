#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s1, s2;
    cin >> s1 >> s2;
    vector <int> loc;

    if (s1.size() != s2.size()) {
        cout << "NO" << endl;
        return 0;
    }
    int n = s1.size();
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            loc.push_back(i);
        }
    }

    if (loc.size() != 2) {
        cout << "NO" << endl;
        return 0;
    }

    char temp = s1[loc[0]];
    s1[loc[0]] = s1[loc[1]];
    s1[loc[1]] = temp;

    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}