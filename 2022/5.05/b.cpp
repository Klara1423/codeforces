#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    be:
    while(t--){
        int n=0,a[32]={0},s=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];

        if(n==1) cout<<"0\n";
        else{
            for(int i=n-2;i>=0;i--){
                if(a[i]==0&&i!=0||a[i+1]==0){
                    cout<<"-1\n";
                    goto be;
                } 
                while(a[i]>=a[i+1]){
                    a[i]/=2;
                    s++;
                }
            }
            cout<<s<<"\n";
        }
    }
    return 0;
}