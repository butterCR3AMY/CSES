#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, sol[1000][1000], cnt;
char building[1000][1000];
queue<pair<int, int>> q;
pair<int, int> cur, nextPos;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> building[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (building[i][j] == '.' && sol[i][j] == 0)
            {
                cnt ++;
                q.push({i, j});
                while (!q.empty())
                {
                    cur = q.front();
                    q.pop();
                    if (cur.first >= n || cur.first < 0 || cur.second < 0 || cur.second >= m)
                        continue;
                    if (sol[cur.first][cur.second] == 1 || building[cur.first][cur.second] == '#')
                        continue;
                    sol[cur.first][cur.second] = 1;
                    for (int i = cur.first-1; i <= cur.first+1; i++)
                    {
                        for (int j = cur.second-1; j <= cur.second+1; j++)
                        {
                            if ((i == cur.first && j == cur.second) || (i != cur.first && j != cur.second))
                                continue;
                            nextPos.first = i;
                            nextPos.second = j;
                            q.push(nextPos);
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
}
