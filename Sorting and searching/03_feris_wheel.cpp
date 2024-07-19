#include "bits/stdc++.h"
using namespace std;
int main() {
    long n, weight;
    cin >> n >> weight;
    vector<long> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    sort(c.begin(), c.end());
    long i = 0, j = n - 1, res = 0;
    while (i <= j) {
        if (i == j) {
            res++;
            break;
        } else {
            if (c[i] + c[j] <= weight) {
                res++;
                i++;
                j--;
            } else {
                res++;
                j--;
            }
        }
    }
    cout << res << endl;
    return 0;
}
