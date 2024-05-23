#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int res=1;
    int temp=1;
    for(int i=1;i<l;i++){
        
        if(s[i-1]==s[i]){
            temp++;
        }
        else{
            if(res < temp)
                res=temp;
            temp=1;
        }
    }
    if(res < temp)
                res=temp;
    cout<<res;
}