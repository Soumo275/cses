#include "bits/stdc++.h"
using namespace std;
int main() {
    
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int res=0;
    int c=0;
    int i=0,j=0;
    while(i<n && j<n){

        if(a[i]<b[j]){
            c++;
            res=max(res,c);
            i++;
        } 
        else{
            c--;
            j++;
        }
        

    }
    cout << res;

    return 0;
}