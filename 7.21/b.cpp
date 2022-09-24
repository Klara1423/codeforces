#include<iostream>
using namespace std;
int main(){
    long long n=0,m=0;
    cin>>n>>m;
    long long a[n+1]={0},b[n+1]={0},c[n+1]={0},s[m]={0},t[m]={0};
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        if(i!=1){
            long long ans=a[i-1]-a[i];
            if(ans>0) b[i]=ans+b[i-1];
            else b[i]=b[i-1];
        }
    }
    for(long long i=n;i>1;i--){
        if(i!=n){
            long long ans2=a[i]-a[i-1];
            if(ans2>0) c[i]=ans2+c[i+1];
            else c[i]=c[i+1];
        }
    }
    c[1]=c[2];
    for(long long j=0;j<m;j++){
        cin>>s[j]>>t[j];
        if(s[j]-t[j]<0) cout<<b[t[j]]-b[s[j]]<<endl;
        else cout<<c[t[j]]-c[s[j]]<<endl;
    }
    return 0;
}