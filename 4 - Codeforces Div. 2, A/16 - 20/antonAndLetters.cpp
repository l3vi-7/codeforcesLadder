#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    char c;
    set <char> s;
    cin >> c;
    while (c != '}') {
        cin >> c;
        if (c != ',' && c != '}') {
            s.insert(c);
        }
    }
    
    cout << s.size() <<endl;
    return 0;
}