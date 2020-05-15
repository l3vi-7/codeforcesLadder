#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, x, count = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int c_4 = 0, c_7 = 0;
        for (auto i : s) {
            if (i == '7')
                c_7 += 1;
            if (i == '4')
                c_4 += 1;
        }
        if (c_4 + c_7 <= x)
            count += 1;
    }

    cout << count << endl;
    return 0;
}