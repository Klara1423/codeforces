#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[101]={0},f=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i){
                if(a[i]%a[0]!=0) f=1;
            }
        }
        if(f) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}