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
    int s1 = 0, s2 = 0, diff_par = 0;
    for (int i = 0; i < n; i++) {
        int l, h;
        cin >> h >> l;
        s1 += h;
        s2 += l;
        if (h % 2 == 0 && l % 2 != 0 || h % 2 != 0 && l % 2 == 0)
            diff_par += 1;
    }

    if (s1 % 2 == 0 && s2 % 2 == 0 || s1 % 2 != 0 && s2 % 2 != 0) {
        if (s1 % 2 == 0)
            cout << 0 <<endl;
        else {
            if (diff_par > 0)
                cout << 1 <<endl;
            else
               cout << -1 <<endl; 
        }
    } else {
        cout << -1 <<endl;
    }
    return 0;
}