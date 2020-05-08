#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int x1, x2, y1, y2,x3,x4,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2;
    double m = 13131;
    if (x1 != x2)
        m = (y2 - y1) / (x2 - x1);
    if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1-y2)) {
        cout << -1 <<endl;
    } else {
        int dis_x = abs(x2 - x1);
        int dis_y = abs(y2 - y1);
        if (y1 == y2) {
            x3 = x1;
            x4 = x2;
            y3 = y1 + dis_x;
            y4 = y3;
        } else if (x1 == x2) {
            y3 = y1;
            y4 = y2;
            x3 = x1 + dis_y;
            x4 = x3;
        } else {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }

        cout << x3 << " " << y3 << " " << x4 << " " << y4 <<endl;
    }
    return 0;
}