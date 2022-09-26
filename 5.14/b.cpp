#include<iostream>
using namespace std;
int main(){
    int n=0,q=0,a[200005]={0},b[200005]={1};
    long long sum=0;    
    int t=0,k=0,X=0,x=0,zero=0;
    cin>>n>>q;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=1;
    }


    for(int i=1;i<=q;i++){
        cin>>t;

        if(t==1){
            cin>>k>>X;
            if(b[k]>zero) sum+=((long long)X-a[k]);
            else sum+=((long long)X-(long long)x);
            a[k]=X,b[k]=i;      
        }else{
            cin>>x;
            sum=n*(long long)x;
            zero=i;
        }

        cout<<sum<<endl;
    }
    return 0;
}