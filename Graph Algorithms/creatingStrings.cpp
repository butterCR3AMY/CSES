#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int sol[8], n;
vector<char> x;
string dig, pos;
set<string> ans;
void generate(int i)
{
    if (i >= n)
    {
        pos = "";
        for (int j = 0; j < n; j++)
            pos += x[j];
        ans.insert(pos);
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if (sol[j])
                continue;
            x.push_back(dig[j]);
            sol[j] = 1;
            generate(i+1);
            sol[j] = 0;
            x.pop_back();
        }
    }
}
int main()
{
    cin >> dig;
    n = dig.length();
    sort(dig.begin(), dig.end());
    generate(0);
    cout << ans.size() << endl;
    for (auto& i:ans)
        cout << i << endl;
}
