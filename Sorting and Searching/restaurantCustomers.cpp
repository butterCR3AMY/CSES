#include <iostream>
#include <algorithm>
#include <vector>
#define f first
#define s second
using namespace std;

int n, bfor[200010], ans[200010], maxi, pos, cur, a[200010], b[200010];
vector<int> all;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        all.push_back(a[i]);
        all.push_back(b[i]);
    }
    sort(all.begin(), all.end());
    sort(a, a+n);
    sort(b, b+n);
    for (int i = 0; i < 2*n; i++)
    {
        if (binary_search(a, a+n, all[i]))
            cur++;
        else
            cur--;
        maxi = max(cur, maxi);
    }
    cout << maxi;
}
