#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    string s = "", c;
    while (cin >> c) {
        s += c;
    }
    vector <int> vowels {'a','e', 'i' , 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    int i = s.length()-1;
    while (!(s[i] >='a' && s[i] <= 'z') && !(s[i] >= 'A' && s[i] <= 'Z')) 
        i -= 1;
    for (auto j : vowels) {
        if (j == s[i]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}