#include "bits/stdc++.h"
using namespace std;
int main(){
    long n;
    cin >> n;

    vector<string> grey;
    long size=2;

    grey.push_back("0");
    grey.push_back("1");

    for(long i=2;i<=n; i++){

        for(long j=size-1;j>=0;j--){
            grey.push_back(grey[j]);
        }

        size=size*2;

        for(long k=0;k<size;k++){
            if(k<size/2)
                grey[k]="0"+grey[k];
            else   
                grey[k]="1"+grey[k];
        }


    }
    for(auto x: grey)cout<<x<<endl;

    return 0;
}