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
    vector <int> v(n);
    int min_val = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < min_val)
            min_val = v[i];
    }
    int count = 0;
    while (count < n) {
        count = 0;
        int temp = min_val;
        for (int i = 0; i < n; i++) {
            if (v[i] > min_val) {
                v[i] = v[i] % min_val;
                if (v[i] == 0)
                    v[i] = min_val;
            }
            if (v[i] == min_val)
                count += 1;
            if (temp > v[i])
                temp = v[i];
        }
        min_val = temp;
    }

    cout << min_val * count <<endl;
    return 0;
}