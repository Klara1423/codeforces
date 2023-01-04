#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[200003]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1) cout<<"yes\n";
        else{
            if(a[n-1]-a[0]>n+1) cout<<"no\n";
            else cout<<"yes\n";
        }
    }
    return 0;
}