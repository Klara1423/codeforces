#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,q=0,a[100001]={0},f=0,b=0;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=q&&a[i]>b){
                b=a[i];
                f=q-b;
            }
        }
        for(int i=0;i<n;i++){
            if(q==0){
                cout<<"0 ";
            }else if(a[i]>q&&f==0){
                cout<<"1 ";
            }else if(a[i]>q&&f==0){
                cout<<"0 ";
            }else if(a[i]<=q){ 
                cout<<"1 ";
            }else if(a[i]>q){
                cout<<"1 ";
                q--;
                f--;
            }
        }
        cout<<endl;
    }
    return 0;
}