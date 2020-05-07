#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    int prod = min(m , n);
    if (prod % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;

    return 0;
}