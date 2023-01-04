#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int i=0,m=0,n=0;
    cin>>i;
    while(i--){
        cin>>n>>m;//n行 m列
        int p=min(m,n),q=abs(m-n);
        if(n>2&&m==1) cout<<-1<<endl;
        else if(n==1&&m>2) cout<<-1<<endl;
        else cout<<2*(p-1)+4*(q/2)+q%2<<endl;
    }
    return 0;
}