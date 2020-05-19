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

    map <string,int> scores;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        scores[s] += 1;
    }

    int max_score = INT_MIN; string winner;

    for (auto i : scores) {
        if (i.second > max_score) {
            max_score = i.second;
            winner = i.first;
        }
    }

    cout << winner <<endl;

    return 0;
}