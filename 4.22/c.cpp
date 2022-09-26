#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,x=0,a[200005],y=0;
        cin>>n>>x;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int q=a[0];
        for(int i=0;i<x-q+1;i++){
            for(int j=0,s=0;j<n;j++){
                if(s+a[j]<=x){
                   s+=a[j]; 
                   y++;
                }else break;
            }
            
            for(int j=0;j<n;j++) a[j]++;
        }
        cout<<y<<endl;
    }
    return 0;
}