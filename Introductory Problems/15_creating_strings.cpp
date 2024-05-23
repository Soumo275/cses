#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;

    set<string> res;

    sort(s.begin(),s.end());
    res.insert(s);

    while(next_permutation(s.begin(),s.end())){
        res.insert(s);
    }
    
    cout <<res.size() <<endl;
    for(auto x:res) cout<<x<<endl;
    
    return 0;
}