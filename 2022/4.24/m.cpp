#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,m=0,a=0,b=0,r=0,w=0;
        cin>>n>>m;
        while(m--){
            cin>>a>>b;            
            r=a>r?a:r;
            w=b>w?b:w;
        }
        if(r+b>n) cout<<"IMPOSSIBLE\n";
        else{
            int i=n-r-w;
            while(i--) cout<<'R';
            while(r--) cout<<'R';
            while(w--) cout<<'W';
            cout<<endl;
        }
    }
    return 0;
}