#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        string s,c;
        cin>>n>>s>>k>>c;
        
        int en=1;
        for(int i=0;i<k;i++){
            if(s.find(c[i])!=-1){
                en=0;
            }
        }
        if(en){
            cout<<"0\n";
            continue;
        }

        int f=0;
        while(1){

            int z=0,pos=1;
            while(1){
                for(int i=0;i<k;i++){
                    int bailan=s.find(c[i]);
                    if(bailan!=-1){
                        if(z>1) pos=1;
                        else pos=s.find(c[i]);
                        z++;
                    }
                    if(s.find(c[i],bailan)==-1) goto rua;
                }
            }
            
            rua:

            if(z==1&&pos==0){
                cout<<f<<endl;
                break;
            }

            for(int i=0;i<k;i++){
                if(s.find(c[i])!=-1){
                    if(s.find(c[i])-1>=0) s.erase(s.find(c[i])-1,1);
                    f++;
                }
            }
        }
    }
    return 0;
}