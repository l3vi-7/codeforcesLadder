#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, l;
    cin >> n >> l;
    if (n== l) {
        cout << "YES" <<endl;
        cout << 0 << endl;
        return 0;
    } else {
        int i = 1;
        double k = 0;
        while (pow(n, i) <= l) {
            k = pow(n, i);
            //cout << k << endl;
            i++;
        }
        
        if ((int)k == l) {
            cout << "YES" << endl;
            cout << i - 2 <<endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    //cout << -1 <<endl;
    return 0;
}