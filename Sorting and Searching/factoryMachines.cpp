#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;

ll n, t, a[200010], cur;
ll bs(ll l, ll r)
{
    ll mid;
    while (l < r)
    {
        mid = (l+r)/2;
        cur = 0;
        for (int i = 0; i < n; i++)
            cur += mid/a[i];
        if (cur < t)
            l = mid+1;
        else
            r = mid;
    }
    return l;
}
int main()
{
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    cout << bs(1, t*a[0]);
}
