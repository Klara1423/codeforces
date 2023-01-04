#include<iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    b:
    while(n--){
        int m=0,a[55]={0};
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<m;i+=2){
            int s=a[0]%2;
            if(a[i]%2!=s){
                cout<<"No\n";
                goto b;
            }
        }
 
        for(int i=1;i<m;i+=2){
            int s=a[1]%2;
            if(a[i]%2!=s){
                cout<<"No\n";
                goto b;
            }
        }
 
        cout<<"Yes\n";
    }
    return 0;
}