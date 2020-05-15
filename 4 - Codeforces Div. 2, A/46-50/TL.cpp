#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)


int main()
{
    IOS;
    int n , m;
    cin >> n >> m;
    vector <int> correct(n), incorrect(m);
    int min_ele_v = INT_MAX, max_ele_p = INT_MIN, min_ele_c = INT_MAX;
    for (int i = 0; i < n; i++){
        cin >> correct[i];
        if (correct[i] < min_ele_v)
            min_ele_v = correct[i];
        if (correct[i] > max_ele_p)
            max_ele_p = correct[i];
    } 
    for (int j = 0; j < m; j++) {
        cin >> incorrect[j];
        if (incorrect[j] < min_ele_c)
            min_ele_c = incorrect[j];
    } 

    int answer = max(2 * min_ele_v, max_ele_p);
    if ( answer < min_ele_c)
        cout << answer <<endl;
    else
        cout << -1 <<endl;

    



    return 0;
}