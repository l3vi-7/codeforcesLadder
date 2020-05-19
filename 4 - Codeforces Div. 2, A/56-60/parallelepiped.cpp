#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int ab, bc, ca;
    cin >> ab >> bc >> ca;

    double a2bc = ab * ca, a, b, c;
    a = sqrt(a2bc / bc);
    b = ab / a;
    c = ca / a;

    cout << 4 * (a + b + c) << endl;

    return 0;
}