#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int n, m, k, ppl[200000], ans = 0, cur;
multiset<int> ap;
int main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ppl[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> cur;
        ap.insert(cur);
    }
    sort(ppl, ppl+n);
    for (int i = 0; i < n; i++)
    {
        multiset<int>::iterator it = ap.lower_bound(ppl[i]-k);
        if (it == ap.end())
            break;
        if (*it <= ppl[i]+k)
        {
            ans++;
            ap.erase(it);
        }
    }
    cout << ans << endl;
}
