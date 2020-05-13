#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int a, b;
    cin >> a >> b;
    int win = 0, draw = 0, loss = 0;
    for (int i = 1; i <= 6; i++) {
        int k = abs(a - i), l = abs(b - i);
        //cout << i << " "<< k << " " << l <<endl;
        if (k < l)
            win += 1;
        else if (k > l)
            loss += 1;
        else
            draw += 1;
    }

    cout << win << " " << draw << " " << loss << endl;
    return 0;
}