#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[count]) {
            count += 1;
        }
    }

    cout << count + 1 << endl;
    return 0;
}