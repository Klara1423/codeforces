#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[51];
        cin>>n>>a[0];
        
        int min=a[0],sum=a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];

            sum+=a[i];
            if(a[i]<min) min=a[i];
        }

        sum-=n*min;
        cout<<sum<<endl;
    }
    return 0;
}