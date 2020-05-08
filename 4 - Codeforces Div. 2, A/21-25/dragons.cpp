#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

int main()
{
    IOS;
    int s, n;
    cin >> s >> n;
    vector <pair<int,int>> x;
    for (int i = 0; i < n; i++) {
        int l, k;
        cin >> l >> k;
        x.push_back({l, k});
    }
    sort(x.begin(), x.end());
    bool flag = true;
    for (int i = 0; i < n; i++) {
        //cout << s << " " << x[i].first<<endl;
        if (s > x[i].first)
            s+= x[i].second;
        else{
            flag = false;
            //cout << "NO"<<endl;
            break;
        }
    }

    if (flag)
        cout << "YES" <<endl;
    else
        cout << "NO"<<endl;

    return 0;
}