#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    if (r1 == r2 || c1 == c2) {
        cout << 1 << " ";
    } else
        cout << 2 << " ";
    if (r1 - r2 == c1 - c2 || r1 + c1 == r2 + c2)
        cout << 1 << " ";
    else if ((r1 + c1) % 2 == (r2 + c2)  % 2){
        cout << 2 << " ";
    } else 
        cout << 0 << " ";
        
    
    if (r1 == r2 ) {
        cout << abs (c1 - c2) << endl;
    } else if (c1 == c2) {
        cout << abs(r1 - r2) << endl;
    } else if (r1 - r2 == c1 - c2 || r1 + c1 == r2 + c2) {
        cout << abs(r1 - r2) << endl;
    } else {
        int c = 0;
        if (c1 < c2) {
            if (r1 < r2) {
                while (c1 != c2 && r1 != r2) {
                    r1 += 1;
                    c1 += 1;
                    c += 1;
                }
            } else {
                while (c1 != c2 && r1 != r2) {
                    r1 -= 1;
                    c1 += 1;
                    c += 1;
                }
            }
        } else {
            if (r1 < r2) {
                while (c1 != c2 && r1 != r2) {
                    r1 += 1;
                    c1 -= 1;
                    c += 1;
                }
            } else {
                while (c1 != c2 && r1 != r2) {
                    r1 -= 1;
                    c1 -= 1;
                    c += 1;
                }
            }
        }
        cout << c + max(abs (r1 - r2), abs (c1 - c2)) << endl;
    }

    return 0;
}