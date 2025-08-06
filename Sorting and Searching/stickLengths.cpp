#include <iostream>
#include <algorithm>
using namespace std;

long long n, p[200010], ans;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p+n);
    for (int i = 0; i < n; i++)
        ans += abs(p[i]-p[n/2]);
    cout << ans;
}
