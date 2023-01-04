#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long n=0,m=0;
        cin>>n>>m;
        if((m+n)%2) cout<<"Burenka\n";
        else cout<<"Tonya\n";
    }
    return 0;
}