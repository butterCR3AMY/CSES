#include <iostream>
using namespace std;

int n, x, dp[1000010], c[1000010];
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i <= x; i++)
        dp[i] = (int)1e6+10;
    dp[0] = 0;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= c[j])
                dp[i] = min(dp[i], dp[i-c[j]]+1);
        }
    }
    if (dp[x] == (int)1e6+10)
        cout << -1;
    else
        cout << dp[x];
}
