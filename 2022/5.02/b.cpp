#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        char x,y;
        int n=0;
        cin>>x>>y;
        int a=x-'a',b=y-'a';
        if(a>b) b++;
        n=a*25+b;
        cout<<n<<endl;
    }
    return 0;
}