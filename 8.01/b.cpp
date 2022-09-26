#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,s=0;
        cin>>n;
        int a[200002]={0},b[200002][2]={0};

        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]][0]++;

            if(b[a[i]][0]>1){
                if(i!=n-1){
                    s=i+1;
                }else{
                    s=max(s,b[a[i]][1]);
                }
            }

            
            b[a[i]][1]=i+1;
        }
        cout<<s<<endl;
    }
    return 0;
}