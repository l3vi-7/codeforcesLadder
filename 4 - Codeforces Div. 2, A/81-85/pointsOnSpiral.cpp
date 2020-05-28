#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int x, y;
    cin >> x >> y;
    int x1 = 0, y1 = 0, x2 = 1, y2 = 0;
    int i = 1, inc = 1, turn = 0;
    while (true) {
        if ((x >= min(x1, x2) && x <= max(x1, x2)) && (y >= min(y1, y2) && y <= max(y1, y2))) {
            cout << turn << endl;
            break;
        }
        //cout << i << " " <<  x1 << " " << y1 << "    " << x2 << " " << y2 << endl;
        x1 = x2;
        y1 = y2;
        if (i % 4 == 0) {
            inc += 1;
            x2 += inc;
        } else if (i % 4 == 1) {
            y2 += inc;
        } else if (i % 4 == 2) {
            inc += 1;
            x2 -= inc;
        } else
            y2 -= inc;
        i += 1;
        turn += 1;
    }

    return 0;
}