#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int c=0,t=0,s=5001;
    cin>>c;
    for(int i=0;i<c/3;i++){
        for(int j=0;j<c/2;j++){
            int k=c-i-j;
            if(k<i+j && i*i+j*j==k*k){
                t=k-min(i,j);
                s=min(s,t);
            }
        }
    }
    if(s!=5001) cout<<s;
    else cout<<-1;
    return 0;
}