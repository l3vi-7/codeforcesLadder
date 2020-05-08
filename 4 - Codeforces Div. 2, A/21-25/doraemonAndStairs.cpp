#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, m,ans = -1;
    cin >> n >> m;
    if (m > n)
        ans = -1;
    else {
        if (n % 2 == 0)
            ans = n/ 2;
        else
            ans = (n / 2) + 1;
        
        while (ans%m != 0) {
            ans += 1;
        }
    }
        cout << ans <<endl;
    
    return 0;
}