#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int a=0,b=0,c=0,x=0,y=0;
        cin>>a>>b>>c>>x>>y;
        if(a>=x){
            if(b+c>=y) cout<<"yes\n";
            else cout<<"no\n";
        }else{
            if(a+c>=x){
                c=a+c-x;
                if(b+c>=y) cout<<"yes\n";
                else cout<<"no\n";
            }else cout<<"no\n";
        }
    }
    return 0;
}