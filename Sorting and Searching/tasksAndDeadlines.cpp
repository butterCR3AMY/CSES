#include <iostream>
#include <algorithm>
#define f first
#define s second
using namespace std;

long long n, ans, cur;
pair<int, int> task[200010];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> task[i].f >> task[i].s;
    sort(task, task+n);
    for (int i = 0; i < n; i++)
    {
        cur += task[i].f;
        ans += task[i].s-cur;
    }
    cout << ans;
}
