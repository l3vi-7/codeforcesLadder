#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    vector <string> palTimes {"00:00", "01:10", "02:20", "03:30", "04:40","05:50", "10:01", "11:11", "12:21", "13:31", "14:41","15:51","20:02", "21:12", "22:22", "23:32"};
    string t;
    cin >> t;
    if (t[0] == '2' && t[1] == '3') {
        if (t[3] > '3') {
            cout << "00:00" << endl;
        } else if (t[3] == '3' ) {
            if (t[4] >= '2')
                cout << "00:00" << endl;
            else
            cout << "23:32" << endl;
        } else {
            cout << "23:32" << endl;
        }
        return 0;
    }

    if (t[0] == '0' && t[1] >= '5') {
        if (t[1] > '5')
            cout <<"10:01" << endl;
        else if (t[1] == '5') {
            if (t[3] < 5)
                cout << "05:50" << endl;
            else {
                cout <<"10:01" << endl;
            }
        }
        return 0;
    }

    if (t[0] == '1' && t[1] == 0 ) {
        if ( t[3]  == '0' && t[4] == '0')
            cout <<"10:01" << endl;
        else
            cout <<"11:11" << endl; 
        return 0;
    }

    if (t[0] == '1' && t[1] >= '5') {
        if (t[1] > '5')
            cout <<"20:02" << endl;
        else if (t[1] == '5') {
            if (t[3] < 5)
                cout << "15:51" << endl;
            else {
                cout <<"20:02" << endl;
            }
        }
        return 0;
    }

    if (t[0] == '2' && t[1] == 0 ) {
        if ( t[3]  == '0' && t[4] <= '1')
            cout <<"20:02" << endl;
        else
            cout <<"21:12" << endl; 
        return 0;
    }

    int i = 0;
    while(t[0] > palTimes[i][0])
        i++;
    
    while(t[1] > palTimes[i][1])
        i++;

    if (t[3] > palTimes[i][3]) {
        cout << palTimes[i + 1] << endl;
    } else if (t[3] == palTimes[i][3]) {
        if (t[4] >= palTimes[i][4])
            cout << palTimes[i + 1] << endl;
        else
            cout << palTimes[i] << endl;
    } else {
        cout << palTimes[i] << endl;
    }

    return 0;
}