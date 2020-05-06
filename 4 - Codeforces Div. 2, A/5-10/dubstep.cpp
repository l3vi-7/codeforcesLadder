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
    int n = s.size();
    vector <string> v;
    string k = "";
    for (int i = 0; i <= n; i++) {
        //cout << i << endl;
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B' or i == n) {
            if (k.size() != 0)
                v.push_back(k);
            k = "";
            i += 2;
        } else {
            k += s[i];
        }
    }

    for (auto i : v) {
        //cout << i.size() <<endl;
        cout << i << " ";
    }
    cout << endl;

    return 0;
}