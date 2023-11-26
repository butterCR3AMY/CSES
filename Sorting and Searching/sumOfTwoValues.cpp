#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, x;
pair<int,int> arr[200000];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr, arr+n);
    int i = 0, j = n-1;
    while(i < n && j < n)
    {
        if (i == j)
        {
            cout << "IMPOSSIBLE\n";
            break;
        }
        if ((arr[i].first+arr[j].first) < x)
            i++;
        else if ((arr[i].first+arr[j].first) > x)
            j--;
        else
        {
            cout << arr[i].second << " " << arr[j].second << '\n';
            break;
        }
    }
}
