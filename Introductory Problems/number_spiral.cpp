#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        long long x,y;
        cin >> x >> y;
        long long res=0;

        if(x>y){
            if(x%2==0)
                res= x*x - y +1;
            else res= (x-1)*(x-1) +y;
        }
        else{
            if(y%2!=0)
                res= y*y - x +1;
            else res= (y-1)*(y-1) +x;
        }
        cout << res<< endl;

    }
    return 0;
}