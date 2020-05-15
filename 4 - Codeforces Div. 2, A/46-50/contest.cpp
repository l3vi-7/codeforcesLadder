#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double score_misha, score_vasya;
    score_misha = max((double)3 * a / 10, (double)a - (double)(a*c / 250));
    score_vasya = max((double)3 * b / 10, (double)b - (double)(b*d / 250));
    if (score_misha > score_vasya)
        cout << "Misha" <<endl;
    else if (score_vasya > score_misha)
        cout << "Vasya" << endl;
    else 
        cout << "Tie" <<endl;
    return 0;
}