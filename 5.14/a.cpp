#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long n=0;
        cin>>n;
        if(n%2==1||n<4) cout<<"-1\n";
        else if(n==6) cout<<1<<' '<<1<<endl;
        else if(n%4==0&&n%6==0) cout<<n/6<<' '<<n/4<<endl;
        else{
            long long min=n/6,max=n/4;
            if(n%6!=0) min++;
            cout<<min<<' '<<max<<endl;
        }
    }
    return 0;
}
