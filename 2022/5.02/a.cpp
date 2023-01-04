#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x=0,y=0,a=1,b=1;
        cin>>x>>y;
        if(x>y) cout<<"0 0\n";
        else if(y%x) cout<<"0 0\n";
        else{
            b=y/x;
            cout<<a<<' '<<b<<endl;
        }
    }
    return 0;
}