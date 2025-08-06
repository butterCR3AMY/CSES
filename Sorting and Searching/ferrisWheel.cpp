#include <iostream>
#include <algorithm>
using namespace std;

int n, x, c[200010], l, r, ans;
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c, c+n);
    l = 0;
    r = n-1;
    while (l <= r)
    {
        if (l == r)
        {
            ans++;
            break;
        }
        if (c[l]+c[r] <= x)
        {
            l++;
            r--;
            ans++;
        }
        else
        {
            r--;
            ans++;
        }
    }
    cout << ans;
}
