#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,q=0,a[100086],f=0;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            f=max(f,a[i]);
        }
        for(int i=0;i<q;i++){
            int j=0,k=0;
            cin>>j>>k;
        }
    }
    return 0;
}