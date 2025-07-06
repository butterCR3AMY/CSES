#include <iostream>
using namespace std;

int cnt, n = 8, col[8], diag1[16], diag2[16];
string board[8];
void go(int y)
{
    if (y == n)
    {
        cnt++;
    }
    for (int x = 0; x < 8; x++)
    {
        if (board[x][y] == '*')
            continue;
        if (col[x] || diag1[x+y] || diag2[x-y+n-1])
            continue;
        col[x] = 1;
        diag1[x+y] = 1;
        diag2[x-y+n-1] = 1;
        go(y+1);
        col[x] = 0;
        diag1[x+y] = 0;
        diag2[x-y+n-1] = 0;
    }
}
int main()
{
    for (int i = 0; i < n; i++)
        cin >> board[i];
    go(0);
    cout << cnt;
}
