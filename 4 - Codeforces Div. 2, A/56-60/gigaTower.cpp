#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll n;
    cin >> n;
    bool flag = false;
    ll b = 0;
    while (flag == false || b == 0) {
        string s = to_string(n);
        for (auto i : s) {
            if (i == '8' && b != 0) {
                flag = true;
                cout << b << endl;
                return 0;
            }
        }
        n += 1;
        b += 1;
    }
    return 0;
}