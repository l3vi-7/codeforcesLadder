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
    int count_odd = 0, count_eve = 0, last_odd, last_eve;
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        if (k % 2 == 0) {
            count_eve += 1;
            last_eve = i;
        } else {
            count_odd += 1;
            last_odd = i;
        }
    }

    if (count_eve == 1)
        cout << last_eve <<endl;
    else 
        cout << last_odd <<endl;
    return 0;
}