#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    be:
    while(t--){
        int l1=0,r1=0,l2=0,r2=0;
        cin>>l1>>r1>>l2>>r2;

        for(int i=l1;i<=r1;i++){
            if(i>=l2&&i<=r2){
                cout<<i<<endl;
                goto be;
            }
        }
        cout<<l1+l2<<endl;
    }
    return 0;
}