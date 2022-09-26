#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,a[100]={0},tong[101]={0},s=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            tong[a[i]]++;
        }
        int tmp=0;
        
        for(int i=1;i<=100;i++){
            if(tong[i]>1) tmp=1;
        }

        if(tong[0]==0&&tmp==0) s++;

        for(int i=1;i<=100;i++){
            s+=tong[i];
        }
        cout<<s<<endl;
    }
    return 0;
}