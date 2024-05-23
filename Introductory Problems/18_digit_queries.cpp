#include "bits/stdc++.h"
using namespace std;

long ind_pos(long n, long pos)
{
    long i = 1;
    while (n > 0)
    {
        long tmp = n % 10;
        if (i == pos)
            return tmp;
        n /= 10;
        ++i;
    }
    return 0;
}

int main()
{

    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long d = 1, curr = 0, c = 1;

        while (n > d * 9 * c)
        {
            n -= d * 9 * c;
            d++;
            curr = curr * 10 + 9;
            c *= 10;
        }

        long tmp1 = n / d;
        curr += tmp1;
        long tmp2 = n % d;

        if (tmp2 == 0)
            cout << ind_pos(curr, 1);
        else
            cout << ind_pos(curr + 1, d - tmp2 + 1);
        cout << endl;
    }
    return 0;
}