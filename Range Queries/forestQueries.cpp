#include <iostream>
#include <algorithm>
using namespace std;

int n, q, x1, x2, y1, y2, l, u, o, cur, prefixSums[1010][1010];
string board[1010];
int main()
{
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    if (board[i][j] == '*')
                        prefixSums[0][0] = 1;
                }
                else if (board[i][j] == '*')
                    prefixSums[i][j] = prefixSums[i][j-1]+1;
                else
                    prefixSums[i][j] = prefixSums[i][j-1];
            }
        }
        else
        {
            cur = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    if (board[i][j] == '*')
                        cur = 1;
                }
                else if (board[i][j] == '*')
                    cur += 1;
                prefixSums[i][j] = prefixSums[i-1][j]+cur;
            }
        }
    }
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        x2--;
        y2--;
        l = 0;
        u = 0;
        o = 0;
        if (x1 > 0)
            u = prefixSums[x1-1][y2];
        if (y1 > 0)
            l = prefixSums[x2][y1-1];
        if (x1 > 0 && y1 > 0)
            o = prefixSums[x1-1][y1-1];
        cout << prefixSums[x2][y2]-l-u+o << '\n';
    }
}
