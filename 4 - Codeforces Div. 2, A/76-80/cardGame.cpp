#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    vector <char> order {'6','7','8','9','T','J','Q','K','A'};
    char trump;
    string first, second;
    cin >> trump >> first >> second;
    if (first[1] == second[1]) {
        if (find(order.begin(), order.end(), first[0]) - order.begin() > find(order.begin(), order.end(), second[0])- order.begin())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else {
        if (first[1] == trump)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}