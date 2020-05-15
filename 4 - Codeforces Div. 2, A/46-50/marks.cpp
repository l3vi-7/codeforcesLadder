#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    vector <string> marks(n);
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }
    vector <char> maxMarks(m);
    for (int i = 0; i < m; i++) {
        int m = INT_MIN;
        for (int j = 0 ; j < n; j++) {
            m = max(m, (int)marks[j][i]);
        }
        maxMarks[i] = m;
    }

    //for (auto i : maxMarks) {
    //    cout << i << " ";
    //}
    //cout << endl;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (marks[i][j] == maxMarks[j]) {
                count += 1;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}