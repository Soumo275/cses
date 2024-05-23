#include <iostream>
using namespace std;
int main(){
    long long int n, sum = 0,a,i;
    cin >> n;

    for (i=0 ; i < n-1 ; i++) {
        cin >> a;
        sum += a;
    }

    cout << ((n*(n + 1))/2) - sum;

    return 0;
}