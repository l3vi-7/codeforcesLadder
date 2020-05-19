#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    ll a, b, c;
    cin >> a >> b;
    c = a + b;

    ll a1 = 0, b1 = 0, c1 = 0;
    int d;
    ll cn = 1;
    while (a > 0) {
        d = a % 10;
        a /= 10;
        if (d != 0){
            a1 += cn* d;
            cn *= 10;
        }
    }
    cn = 1;

    while (b > 0) {
        d = b % 10;
        b /= 10;
        if (d != 0){
            b1 += cn* d;
            cn *= 10;
        }
    }

    cn = 1;

    while (c > 0) {
        d = c % 10;
        c /= 10;
        if (d != 0){
            c1 += cn* d;
            cn *= 10;
        }
    }
    //cout << a << " " << b << " " << c << endl;
    //cout << a1 << " " << b1 << " " << c1 << endl;
    if (a1 + b1 == c1)
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;

    return 0;
}