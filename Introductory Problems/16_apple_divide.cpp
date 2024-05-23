#include "bits/stdc++.h"
using namespace std;

long check(long a, long b, long arr[], long i, long n) {
    if (i == n)
        return abs(a - b); 

    return min(check(a + arr[i], b, arr, i + 1, n), check(a, b + arr[i], arr, i + 1, n));
}

int main() {
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    cout << check(0, 0, arr, 0, n) << endl;

    return 0;
}