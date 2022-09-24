#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n>>k;
        if(k%2==1){
            cout<<"YES\n";
            for(int i=1;i<n;i+=2){
                cout<<i<<" "<<i+1<<endl;
            }
        }else if(k==0){
            cout<<"NO\n";
        }else{
            if(k%4==0){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
                for(int i=1;i<n;i+=2){
                    if(((i+k+1)*i)%4==0){
                        cout<<i+1<<" "<<i<<endl;
                    }else{
                        cout<<i<<" "<<i+1<<endl;
                    }
                    
                }
            }
        }
    }
    return 0;
}