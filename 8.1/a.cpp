#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,h=0,m=0,hh=25,mm=0;
        cin>>n>>h>>m;
        for(int i=0;i<n;i++){
            int h2=0,m2=0;
            cin>>h2>>m2;
            if(h2<h||(h2==h&&m2<m)){ 
                h2+=24;
            }

            if(hh!=min(hh,h2-h)){
                hh=min(hh,h2-h);
                if(m2-m>=0){
                    mm=m2-m;
                }else{
                    hh--;
                    mm=m2-m+60;
                }
            }else{
                mm=min(mm,(60+m2-m)%60);
            }
        }
        cout<<hh<<' '<<mm<<endl;
    }
    return 0;
}