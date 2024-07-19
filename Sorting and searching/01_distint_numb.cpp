#include "bits/stdc++.h"
using namespace std;

int main(){
    long n;
    cin >> n;
    long a;
    set<int> s;

    for(int i=0;i<n;i++) {
        cin >> a;
        s.insert(a);
    }

    cout << s.size();
        


    
    return 0;
}