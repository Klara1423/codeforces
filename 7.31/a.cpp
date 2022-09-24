#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,m=0;
        string a,b;
        cin>>n>>m>>a>>b;
        string c=a,d=b;
        a.erase(0,n-m+1),b.erase(0,1),c.erase(n-m+1,m-1);
        
        if(a==b&&c.find(d[0])!=-1) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}