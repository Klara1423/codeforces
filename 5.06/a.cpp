#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T=0;
    cin>>T;
    be:
    while(T--){
        int n=0,a[10086]={0};
        cin>>n;
        if(n<=2){
            for(int i=0;i<n;i++) cin>>a[i];
            cout<<"yes\n";
            continue;
        }else{
            cin>>a[0];
            int t=abs(a[0]),pos=0;
            for(int i=1;i<n;i++){
                cin>>a[i];
                if(t>abs(a[i])){
                    t=abs(a[i]);
                    pos=i;
                }
            }//找最小

            int l=0,r=0;
            for(int i=pos+1;i<n;i++){
                if(abs(a[i])<abs(a[i-1])){
                    cout<<"no\n";
                    goto be;
                }
                if(a[i]<0)  r++;
            }

            for(int i=pos-1;i>=0;i--){
                if(abs(a[i])<abs(a[i+1])){
                    cout<<"no\n";
                    goto be;
                }
                if(a[i]>0)  l++;
            }

            if(abs(l-r)<=1) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}