#include <iostream>
#include <algorithm>
using namespace std;

int n, dp[1010][1010], m = (int)1e9+7;
string board[1010];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    if (board[0][0] == '.')
        dp[0][0] = 1;
    else
        dp[0][0] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == '*')
                continue;
            if (i > 0 && board[i-1][j] == '.')
                dp[i][j] += dp[i-1][j];
            if (j > 0 && board[i][j-1] == '.')
                dp[i][j] += dp[i][j-1];
            dp[i][j] = dp[i][j]%m;
        }
    }
    cout << dp[n-1][n-1];
}
