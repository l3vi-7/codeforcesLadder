#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    if (k != 0) {
        cout << k;
        for (int i = 0; i < n - 1; i++)
            cout << 0;
        cout << endl;
    }
    else {
        if (n == 1)
            cout << 0 << endl;
        else
            cout << "No solution" << endl;
    }
        

    return 0;
}