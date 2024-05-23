#include "bits/stdc++.h"
using namespace std;
int main(){

    long long n;
    cin >> n;

    long long res=0;
    long long c=5;
    
    while (c <= n) {
        res +=  n / c;
        c *= 5;
    }
    cout << res << endl;
    return 0;
} 