#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

ll n, k, a[200010], total, maxi, cur, cnt;
ll bs(ll l, ll r)
{
    ll mid;
    while (l < r)
    {
        mid = (l+r)/2;
        cur = 0;
        cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cur+a[i] > mid)
            {
                cnt++;
                cur = a[i];
            }
            else
                cur += a[i];
        }
        cnt++;
        if (cnt > k)
        {
            l = mid+1;
        }
        else
            r = mid;
    }
    return l;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        total += a[i];
    }
    cout << bs(max(total/k, maxi), total);
}
