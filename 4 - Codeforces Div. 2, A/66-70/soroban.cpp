#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s = "--|-----";
    int n;
    cin >> n;

    if (n == 0) {
        cout << "O-|-OOOO" << endl;
        return 0;
    }

    while (n > 0) {
        int d = n % 10;
        string sb = s;
        n /= 10;
        if (d >= 5) {
            d -= 5;
            sb[1] = 'O';
        } else {
            sb[0] = 'O';
        }

        if (d == 0){
            sb[4] = 'O';
            sb[5] = 'O';
            sb[6] = 'O';
            sb[7] = 'O';
        }
        else if (d == 1) {
            sb[3] = 'O';
            sb[5] = 'O';
            sb[6] = 'O';
            sb[7] = 'O';
        } else if (d == 2) {
            sb[3] = 'O';
            sb[4] = 'O';
            sb[6] = 'O';
            sb[7] = 'O';
        } else if (d == 3) {
            sb[3] = 'O';
            sb[4] = 'O';
            sb[5] = 'O';
            sb[7] = 'O';
        } else {
            sb[3] = 'O';
            sb[4] = 'O';
            sb[5] = 'O';
            sb[6] = 'O';
        }
        cout << sb << endl;
    }

    
    return 0;
}