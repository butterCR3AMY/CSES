#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool works = false;
int n, x, cur, target, og;
vector<pair<int,int>> arr;
int main()
{
    cin >> n >> og;
    for (int i = 0; i <n; i++)
    {
        cin >> cur;
        arr.push_back({cur, i+1});
    }
    sort(arr.begin(), arr.end());
    for (int k = 0; k <n; k++)
    {
        target = og-arr[k].first;
        int l = k+1, r = n-1;
        while (l < r)
        {
            if (arr[l].first+arr[r].first > target)
                r--;
            else if (arr[l].first+arr[r].first < target)
                l++;
            else
            {
                cout << arr[k].second << " " << arr[l].second << " " << arr[r].second << endl;
                works = true;
                break;
            }
        }
        if (works)
            break;
    }
    if (!works)
        cout << "IMPOSSIBLE";
}
