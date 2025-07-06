#include <iostream>
#include <vector>
using namespace std;
 
bool works;
long long q, og, pos, pow10, truPow, numDig, curPos, num, forw, posInNum;
vector<int> digits;
int main()
{
    cin >> q;
    for (int w = 0; w < q; w++)
    {
        cin >> og;
        digits.clear();
        pos = og;
        curPos = 0;
        numDig = 1;
        pow10 = 1;
        truPow = 0;
        // see how many digits (vague area)
        for (int dig = 0; dig < og; dig++)
        {
            if (pos >= (curPos+pow10*numDig*9+1))
            {
                curPos += pow10*numDig*9;
                pow10 *= 10;
                numDig++;
                if (pow10 == 1)
                    truPow = 0;
                else
                    truPow = pow10;
            }
            else
                break;
        }
        curPos++;
        forw = (pos-curPos)/numDig;
        posInNum = (pos-curPos)%numDig;
        num = pow10+forw;
        while (num > 0)
        {
            digits.push_back(num%10);
            num /= 10;
        }
        cout << digits[digits.size()-1-posInNum] << '\n';
    }
}
