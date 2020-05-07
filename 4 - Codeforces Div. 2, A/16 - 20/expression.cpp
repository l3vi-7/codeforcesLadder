#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int a, b, c;
    cin >> a >> b >> c;
    int max_ele = INT_MIN;
    max_ele = max(max_ele, (a + b) * c);
	max_ele = max(max_ele, a * (b + c));
	max_ele = max(max_ele , a * b * c);
    max_ele = max(max_ele , a + b + c);
    cout << max_ele << endl;

    return 0;
}