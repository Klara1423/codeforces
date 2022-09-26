#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    be:
    while(t--){
        int n=0,m=0,flag=0,pos=-1;
        char a[6][6];
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='R'&&pos==-1) pos=j;
                else if(a[i][j]=='R'){
                    if(j<pos){   
                        flag=1;
                    }
                }
            }
        }
        if(flag) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}
