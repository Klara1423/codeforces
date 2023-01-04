#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;

    while(t--){
        int n=0,a[200005]={0},b[200005]={0},flag=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }

        for(int i=0;i<n;i++){
            if(b[a[i]]>=3){
                cout<<a[i]<<endl;
                flag=1;
                break;
            }
        }
        
        if(flag) continue;
        else cout<<"-1\n";
    }
    return 0;
}