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
    vector<int> v1, v2, v3;
    for (int i = 0; i< n; i++) {
        int k;
        cin >> k;
        if (k == 1)
            v1.push_back(i);
        else if (k == 2)
            v2.push_back(i);
        else 
            v3.push_back(i);
    }
    int size = min(v1.size(), v2.size());
    size = min(size, (int)v3.size());
    cout << size <<endl;
    for (int i = 0; i < size; i++) {
        cout << v1[i] + 1 << " " << v2[i] + 1 << " " << v3[i] + 1 << endl;
    }

    return 0;
}