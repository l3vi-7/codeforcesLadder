#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    bool flag = false;
    vector <int> v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U','y', 'Y'};
    for(int i = 0; i < s.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            if (s.at(i) == v.at(j)) {
                flag = true;
                break;
            }
        }

        if (flag == false) {
            cout << "." << (char)tolower(s.at(i));
        }

        flag = false;

    }


    return 0;
}