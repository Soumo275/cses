#include "bits/stdc++.h"
using namespace std;
int main() {
    
    int n, m;
    cin >> n >> m;
    map<int, int> tickets;
    vector<int> customer(m);
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        tickets[a]++;
    }
    for (int i = 0; i < m; i++) cin >> customer[i];
    
    for(int i=0;i<m;i++){

        auto it = tickets.upper_bound(customer[i]);
        if (it == tickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            --it;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                tickets.erase(it);
        }


    }

    return 0;
}