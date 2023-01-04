#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,min=10,t=0;
        cin>>n;
        if(n<100){
            cout<<n%10<<endl;
            continue;
        }else{
            while(n){
                t=n%10;
                if(t<min) min=t;
                n/=10;
            }
        }
        cout<<min<<endl;

    }
    return 0;
}