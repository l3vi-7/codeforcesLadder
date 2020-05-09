#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, total_time;
    cin >> n >> total_time;
    vector <int> t (n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int i = 0;
    int num_jokes = 0;
    while (total_time > 0) {
        //cout << i <<endl;
        //cout << total_time <<endl;
        if (i < n && total_time >= t[i]){
            total_time -= t[i];
        i += 1;
        }
        int j = 0; 
        while (total_time >= 5 && j < 2) {
            total_time -= 5;
            j += 1;
            num_jokes += 1;
        }
        if ( j < 2)
            break;
    }

    if (i < n)
        cout << -1 << endl;
    else {
        cout << num_jokes <<endl;
    }

    return 0;
}