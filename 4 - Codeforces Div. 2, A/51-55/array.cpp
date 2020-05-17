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
    vector <int> v(n), neg, zer, pos;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0)
            neg.push_back(v[i]);
        else if (v[i] == 0)
            zer.push_back(v[i]);
        else
            pos.push_back(v[i]);
    }

    if (pos.size() == 0) {
        pos.push_back(neg[neg.size()-1]);
        pos.push_back(neg.at(neg.size()-2));
        neg.pop_back();
        neg.pop_back();
    }

    while (neg.size() % 2 == 0) {
        zer.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (auto i : neg)
        cout << i << " ";
    cout <<endl;
    cout << pos.size() << " ";
    for (auto i : pos)
        cout << i << " ";
    cout <<endl;
    cout << zer.size() << " ";
    for (auto i : zer)
        cout << i << " ";
    cout <<endl;


    return 0;
}