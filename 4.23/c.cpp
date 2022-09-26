#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[200005]={0};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]&&flag) flag=1;
            if(a[i]==a[i-1]) flag=1;

        }

    }

    return 0;
}