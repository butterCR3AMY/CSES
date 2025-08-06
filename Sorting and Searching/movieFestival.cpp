#include <iostream>
#include <algorithm>
#define s second
#define f first
using namespace std;

int n, last, ans;
pair<int, int> movie[200010];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> movie[i].s >> movie[i].f;
    sort(movie, movie+n);
    last = movie[0].f;
    ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (movie[i].s >= last)
        {
            last = movie[i].f;
            ans++;
        }
    }
    cout << ans;
}
