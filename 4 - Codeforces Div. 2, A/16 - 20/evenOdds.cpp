#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    ll n, p;
    cin >> n >> p;
    if (p <= (n + 1)  / 2) {
        cout << (2 * p) - 1<<endl;
    } else {
        p -= (n + 1) / 2;
        cout << (2 * p) << endl;
    }
        
    return 0;
}