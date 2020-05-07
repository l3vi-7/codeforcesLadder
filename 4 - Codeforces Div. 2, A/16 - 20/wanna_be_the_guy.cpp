#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, p;
    set <int> s;
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int k;
        cin >> k;
        s.insert(k);
    }
    cin >> p;
    for (int i = 0; i < p; i++) {
        int k;
        cin >> k;
        s.insert(k);
    }
    if (s.size() == n)
        cout << "I become the guy." <<endl;
    else
        cout << "Oh, my keyboard!" << endl;
        
    return 0;
}