#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n;
    cin >> n;
    int n1, n2, d1, d2;
    if (n < 0) {
        d1 = n % 10;
        n = n / 10;
        d2 = n % 10;
        n = n / 10;
        n = max (n*10 + d1, n * 10 + d2);
    } 

    cout << n <<endl;
    return 0;
}