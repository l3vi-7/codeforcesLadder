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
    vector <int> count (3);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        count[i % 3] += k;
    }

    int index = 0;

    for (int i = 1; i < 3; i++) {
        if (count[index] < count[i])
            index = i;
    }

    if (index == 0)
        cout << "chest" <<endl;
    else if (index == 1)
        cout << "biceps" <<endl;
    else
        cout << "back" <<endl;




    return 0;
}