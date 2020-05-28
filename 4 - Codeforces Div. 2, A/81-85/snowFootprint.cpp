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
    string sn;
    cin >> sn;
    int start = -1, end = -1;
    bool L = false, R = false;
    for (int i = 0; i < n; i++) {
        if (!L && sn[i] == 'L')
            L = true;
        if (!R && sn[i] == 'R')
            R = true;
        if (start == -1 && sn[i] == 'R')
            start = i;
        if (end == -1 && start != -1 && sn[i] == 'L')
            end = i - 1;
    }

    if (start != -1 && end != -1)
        cout << start + 1 << " " << end + 1<< endl;
    else {
        if (L) {
            start = -1;
            end = -1;
            int i = 0;
            while (sn[i] != 'L')
                i++;
            end = i;
            i = n - 1;
            while (sn[i] != 'L')
                i--;
            start = i + 1;
        } else if (R){
            start = -1;
            end = -1;
            int i = 0;
            while (sn[i] != 'R')
                i++;
            start = i + 1;
            i = n - 1;
            while (sn[i] != 'R')
                i--;
            end = i + 2;
        }

        cout << start << " " << end << endl;
    }
    return 0;
}