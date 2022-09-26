#include<iostream>
using namespace std;
int main(){
    int a=0,n=0,r=0,b=0;
    cin>>a;
    while(a--){
        cin>>n>>r>>b;
        int k=r/(b+1),j=r%(b+1);
        for(int i=1;i<=b+1;i++){
            for(int m=0;m<k+(i<=j);m++) cout<<'R';
            if(i<=b) cout<<'B';
        }
        cout<<endl;
    }
    return 0;
}