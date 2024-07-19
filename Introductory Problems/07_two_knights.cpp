#include <iostream>
using namespace std;
int main(){
    
    long long n;
    cin >> n;
    long long res;


   for (long long x = 1; x <= n; x++) {
        long long totalWays = x * x * (x * x - 1) / 2;
        long long attackingPairs = 4 * (x - 1) * (x - 2);
        long long nonAttackingPairs = totalWays - attackingPairs;
        cout << nonAttackingPairs << endl;
    }       
 
    return 0;
}