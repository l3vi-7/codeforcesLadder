#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long int
#define REP(i, a, b) for(int i = a; i < b; i++)

void dfs(vector <string> &chessBoard, int n, int m) {
    vector <bool> flag(2, false);
    for (int i = 0; i < n; i++) {
        char lastSet = 'k';
        for (int j = 0; j < m; j++) {
            
            if (i == 0 && j == 0 && chessBoard[i][j] == '.')
                chessBoard[i][j] = 'B';
            if (chessBoard[i][j] == '.') {
                flag[0] = false;
                flag[1] = false;
                if (i - 1 >= 0) {
                    if (chessBoard[i - 1][j] == 'B')
                        flag[0] = true;
                    else if (chessBoard[i - 1][j] == 'W')
                        flag[1] = true;
                } 
                if (j - 1 >= 0) {
                    if (chessBoard[i][j-1] == 'B')
                        flag[0] = true;
                    else if (chessBoard[i][j-1] == 'W')
                        flag[1] = true;
                }
                if (i + 1 <= n - 1) {
                    if (chessBoard[i + 1][j] == 'B')
                        flag[0] = true;
                    else if (chessBoard[i + 1][j] == 'W')
                        flag[1] = true;
                }
                if (j + 1 <= m - 1) {
                    if (chessBoard[i][j + 1] == 'B')
                        flag[0] = true;
                    else if (chessBoard[i][j + 1] == 'W')
                        flag[1] = true;
                }

                if (!flag[0]) {
                    if (lastSet == 'k' || lastSet == 'W'){
                    chessBoard[i][j] = 'B';
                    lastSet = 'B';
                    }
                }
                else if (!flag[1])
                    if (lastSet == 'k' || lastSet == 'B'){
                    chessBoard[i][j] = 'W';
                    lastSet = 'W';
                    }
            }
        }
    }
    
}

int main()
{
    IOS;
    int n, m;
    cin >> n >> m;
    vector<string> chessBoard(n);

    for (int i = 0; i < n; i++)
        cin >> chessBoard[i];

    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);
    dfs(chessBoard, n, m);

    for (auto i : chessBoard) {
        cout << i <<endl;
    }

    return 0;
}