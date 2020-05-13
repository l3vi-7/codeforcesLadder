#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int n, v,count = 0;
    vector <int> p;
    cin >> n >> v;
    //bool flag = false;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int min_val = INT_MAX;
        for (int i = 0; i < k; i++) {
            int j;
            cin >> j;
            if ( min_val > j)
                min_val = j;
        }

        if (min_val < v) {
            p.push_back(i + 1);
            count += 1;
        }
    }

    cout << count <<endl;
    for (auto i : p)
        cout << i <<" ";
    
    cout << endl;

    return 0;
}