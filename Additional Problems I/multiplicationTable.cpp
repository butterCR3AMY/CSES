#include <iostream>
typedef long long ll;
using namespace std;

ll n, cur;
ll bs(ll l, ll r)
{
    ll mid;
    while (l < r)
    {
        mid = (l+r)/2;
        cur = 0;
        for (int i = 1; i <= n; i++)
            cur += min(mid/i, n);
        if (cur < (n*n+1)/2)
            l = mid+1;
        else
            r = mid;
    }
    return l;
}
int main()
{
    cin >> n;
    cout << bs(1, n*n);
}
