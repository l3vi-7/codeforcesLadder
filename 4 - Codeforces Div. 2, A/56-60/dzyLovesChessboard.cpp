#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

void dfs(vector <string> &chessBoard, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (chessBoard[i][j] == '.') {
                if ((i + j) % 2 == 0)
                    chessBoard[i][j] = 'B';
                else
                    chessBoard[i][j] = 'W';
            }
        }
    }
    
}

int main() {
    IOS;
    int n, m;
    cin >> n >> m;
    vector<string> chessBoard(n);

    for (int i = 0; i < n; i++)
        cin >> chessBoard[i];

    dfs(chessBoard, n, m);

    for (auto i : chessBoard) {
        cout << i <<endl;
    }

    return 0;
}