#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int x=0,a[3]={0};
        cin>>x>>a[0]>>a[1]>>a[2];
        if(a[0]==1||a[1]==2||a[2]==3) cout<<"no\n";
        else if(a[x-1]==0) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}