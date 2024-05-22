#include <iostream>
using namespace std;
int main(){
    long long int n,i;
    cin >> n;
    if(n==1)cout<<1<<" ";
    else if(n<=3) cout << "NO SOLUTION"<<endl;
    else{

        if(n%2!=0)i=n-1;
        else i=n;

        while(i>4){
            cout << i <<" ";
            i=i-2;
        } 
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
        i=5;
        while(i<=n){
            cout<<i<<" ";
            i=i+2;
        }
    }

    return 0;
}