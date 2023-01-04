#include<iostream>
using namespace std;
int main(){
    long long n=0,m=0;
    cin>>n>>m;
    if(m==1){
        cout<<n-1<<endl;
    }else{
        cout<<(m-1)*n<<endl;
    }
    return 0;
}