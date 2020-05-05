#include<bits/stdc++.h>
using namespace std;

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fastscan(k);
            if (k == 1) {
                x = i;
                y = j;
                break;
            }
        }
    }

    cout << abs(x - 2) + abs(y - 2) << endl;

    return 0;
}