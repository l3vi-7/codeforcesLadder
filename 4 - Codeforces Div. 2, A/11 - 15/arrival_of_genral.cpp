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
    int max_ele = INT_MIN, min_ele = INT_MAX, max_i, min_i;
    vector <int> a (n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (max_ele < a[i]){
            max_ele = a[i];
            max_i = i;
            }
        if (min_ele >= a[i]){
            min_ele = a[i];
            min_i = i;
            }
    }

    int swap = 0;
    if (a[0] != max_ele){
        for (int i = max_i; i > 0; i--) {
            if(a[i] == max_ele){
                if (a[i] > a[i - 1]) {
                    int temp = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = temp;
                    swap += 1;
                }
            }
        }
    }
    if (a[n - 1] != min_ele) {
        for (int i = min_i; i < n - 1; i++) {
            if (a[i] == min_ele){
                if (a[i] < a[i + 1]) {
                    int temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    swap += 1;
                }
            }
        }
    }
    cout << swap <<endl;

    return 0;
}