#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a=0,s=0;
        cin>>n;
        while(n--){
            cin>>a;
            s+=a-1;
        }  
        if(s%2) cout<<"errorgorn\n";
        else cout<<"maomao90\n";
        
    }
    return 0;
}