#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, m, k;
    cin >> n >> m >> k;
    vector <int> fil (n);
    for (int i = 0; i < n; i++)
        cin >> fil[i];
    
    sort(fil.begin(), fil.end(), greater<int>());
    int i = 0, rem = 0;
    if (m <= k)
        cout << 0 << endl;
    else {
        while (k > 0 && i < n && k + rem < m) {
            k -= 1;
            rem += fil[i];
            i++;
        }
        if (k + rem >= m)
            cout << i << endl;
        else {
            while (i < n && rem < m) {
                rem -= 1;
                rem += fil[i];
                i += 1;
            }
            if (rem >= m)
                cout << i << endl;
            else
                cout << -1 << endl;
        }
    }



    return 0;
}