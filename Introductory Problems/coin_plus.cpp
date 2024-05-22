#include <iostream>

using namespace std;
int main(){
    long long int t;
    cin>>t;
    for(long long int c=0;c<t;c++){
        long long int a,b;
        cin>>a>>b;

        if(a>b){
            int x=a;
            a=b;
            b=x;}

        long long int diff = b-a;
        if(b-a>a)
            cout<<"NO"<<endl;
            
        else if((a-diff)%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }   
    return 0;
}