#include "bits/stdc++.h"

using namespace std;
int main(){
    
    int n;
    cin >> n ;
    int a[n];
    long res=0;
    cin >> a[0];
    for(int i=1;i<n;i++){
        cin >> a[i];
        if(a[i-1]>a[i]){
            res = res + a[i-1] -a[i];
            a[i]=a[i-1]; 
        } 
    }
    cout << res;


return 0;
}