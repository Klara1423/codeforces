#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,q=0,a[1002]={0},sum1=0;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
        }
        sort(a,a+n);

        
        
    }
    return 0;
}