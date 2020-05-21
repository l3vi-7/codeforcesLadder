#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    int lenB = b.length() - 2, lenC = c.length() - 2, lenD = d.length() - 2;

    int lenA = a.length() - 2;

    //cout << lenA << endl << lenB << endl<< lenC << endl << lenD << endl;
    vector <pair<int, char>> choices {{lenA, 'A'}, {lenB, 'B'}, {lenC, 'C'}, {lenD, 'D'}};

    sort(choices.begin(), choices.end());

    int min_len = choices[0].first, max_len = choices[3].first;
    bool flag1 = true, flag2 = true;

    for (int i = 1; i < 4; i++) {
        if(min_len > (choices[i].first / 2)){
            flag1 = false;
            break;
        }
    }
    

    for (int i = 0; i < 3; i++) {
        if(max_len < choices[i].first * 2){
            flag2 = false;
            break;
        }
    }

    if (flag1 && !flag2) {
        cout << choices[0].second << endl;
        return 0;
    }
    if (flag2 && !flag1) {
        cout << choices[3].second << endl;
        return 0;
    }

    cout << 'C' << endl;

    
    return 0;
}