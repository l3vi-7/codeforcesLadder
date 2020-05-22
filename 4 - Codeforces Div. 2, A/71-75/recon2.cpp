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
    vector <int> heights(n);
    vector <pair<int, pair<int,int>>> diff(n);

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    for (int i = 0; i < n - 1; i++) {
        diff[i].first = abs(heights[i + 1] - heights[i]);
        diff[i].second.first = i;
        diff[i].second.second = i + 1;
    }

    diff[n - 1].first = abs(heights[n - 1] - heights[0]);
    diff[n - 1].second.first = 0;
    diff[n - 1].second.second = n - 1;

    sort(diff.begin(), diff.end());

    cout << diff[0].second.first + 1 << " " << diff[0].second.second + 1 << endl;


    return 0;
}