#include <iostream>
using namespace std;
int main(){

    long long n;
    cin >> n;
    long long a[n],b[n];
    long long i=0,j=0;
    long long as=0,bs=0;
    while(n>0){

        if(i==0){
            a[i]=n;
            i++;
            as+=n;
            n--;
        }
        if(j==0){
            b[j]=n; 
            j++;
            bs+=n;
            n--;
        }
        if(as>bs){
            b[j]=n;
            j++;
            bs+=n;
            n--;
        }
        else{
            a[i]=n;
            i++;
            as+=n;
            n--;
        }

    }
    if(as==bs){
        cout<<"YES"<<endl<<i<<endl;
        for(long long x=0;x<i;x++) cout << a[x] << " ";
        cout<<endl<<j<<endl;
        for(long long x=0;x<j;x++) cout << b[x] << " ";
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}