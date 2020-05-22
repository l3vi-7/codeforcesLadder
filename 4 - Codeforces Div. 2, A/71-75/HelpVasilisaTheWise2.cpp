#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    float x1, x2, y1, y2;

    x2 = float(c2 + r1 - d1) / 2;
    x1 = r1 - x2;
    y1 = d2 - x2;
    y2 = c2 - x2;

    if (x1 != (int)x1 || x2 != (int)x2 || y1 != (int)y1 || y2 != (int)y2) {
        cout << -1 << endl;
        return 0;
    }

    set <float> gems {x1, x2, y1, y2};

    if (gems.size() != 4){
        cout << -1 << endl;
        return 0;
    }

    if (x1 <= 0 || x1 >= 10 || x2 <= 0 || x2 >= 10 || y1 <= 0 || y1 >= 10 || y2 <= 0 || y2 >= 10) {
        cout << -1 << endl;
        return 0;
    }
    if (x1 + x2 != r1 || y1 + y2 != r2 || x1 + y1 != c1 || x2 + y2 != c2 || x1 + y2 != d1 || x2 + y1 != d2) {
        cout << -1 << endl;
        return 0;
    }
    cout << x1 << " " << x2 << endl;
    cout << y1 << " " << y2 << endl;


    return 0;
}