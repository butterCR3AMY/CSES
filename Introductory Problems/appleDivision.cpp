#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int n, apples[20];
long long mini = 2e10, group1, group2;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> apples[i];
    for (int i = 0; i < (1<<n); i++)
    {
        group1 = 0;
        group2 = 0;
        for (int j = 0; j < n; j++)
        {
            if ((1<<j)&i)
                group1 += apples[j];
            else
                group2 += apples[j];
        }
        mini = min(mini, abs(group1-group2));
    }
    cout << mini << endl;
}
