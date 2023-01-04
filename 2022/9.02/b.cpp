#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0,r=0,c=0;
        cin>>n>>k>>r>>c;
        if(k==1){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<"X";
                }cout<<endl;
            }
        }else{
            int f=c-r;
            if(r>c) f=k+f;
            for(int i=0;i<n;i++){
                int l=f;
                for(int j=0;j<n;j++){
                    if(l==0){
                        cout<<"X";
                        l=k-1;
                    }else{
                        cout<<".";
                        l--;
                    }
                }cout<<endl;
                f++;
                if(f>=k) f-=k;
            }
        }
    }
    return 0;
}