#include<iostream>
using namespace std;
int main(){
    int n=0,i=0,j=0;
    cin>>n;
    for(;j<n;i++){
        if(i>=3&&i%2==1){
            j++;
        }else if(i>=8&&i%4==0){
            j++;
        }
    }
    cout<<i-1;
    return 0;
}