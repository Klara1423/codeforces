#include<iostream>
using namespace std;
int main(){
    int i=0,m=0;
    cin>>i;
    while(i--){
        cin>>m;
        if(m<=1399) cout<<"Division 4\n";
        else if(m<=1599&&m>=1400) cout<<"Division 3\n";
        else if(m<=1899&&m>=1600) cout<<"Division 2\n";
        else  cout<<"Division 1\n";
    }
    return 0;
}