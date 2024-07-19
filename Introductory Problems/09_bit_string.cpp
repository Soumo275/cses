#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    long long tot=1;
    while(n>0){
        tot = tot*2;
        tot = tot % 1000000007;
        n--;
    }
    cout << tot << endl;
    return 0;
}