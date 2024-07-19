#include <iostream>
using namespace std;
    int main(){
        long long n;
        cin>>n;
        while(true){
            if(n==1){
                cout<<1;
                break;
            }
            else{
                cout<<n<<" ";
                if(n%2==0)
                    n=n/2;
                else
                    n= n*3 +1;

            }
        }
        return 0;
    }
 // namespace std
