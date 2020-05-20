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
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (i == j)
                cout << k << " ";
            else 
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}