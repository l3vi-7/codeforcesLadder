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
    vector <pair<int,int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        cin >> a[i].second;
    }
    bool flag = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        if (a[i].second > a[i + 1].second){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "Happy Alex" <<endl;
    else
        cout << "Poor Alex" <<endl;

    return 0;
}