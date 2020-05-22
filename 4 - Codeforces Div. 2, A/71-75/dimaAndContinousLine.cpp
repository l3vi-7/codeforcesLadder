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
    vector <ll> cord (n);

    for (int i = 0; i < n; i++)
        cin >> cord[i];

    vector <pair<ll, ll>> dia;

    for (int i = 0; i < n - 1; i++) {
        dia.push_back({cord[i], cord[i + 1]});
    }
    
    for (int i = 0; i < n - 1; i++) {
        ll x = min(dia[i].first, dia[i].second) , y = max (dia[i].first, dia[i].second);
        for (int j = 0; j < n - 1; j++) {
            ll x_1 = min(dia[j].first, dia[j].second) , y_1 = max (dia[j].first, dia[j].second);
            if (x < x_1 && y > x_1 && y < y_1 || y > y_1 && x > x_1 && x < y_1 ) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "no" << endl;


    return 0;
}