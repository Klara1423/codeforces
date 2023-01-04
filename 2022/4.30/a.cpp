#include<iostream>
#include<string>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int score=0,len=str.size();
        for(int i=0;i<len;i++){
            score+=str[i]-'a'+1;
        }
        if(len%2==0){
            cout<<"Alice "<<score<<endl;
        }else if(len==1){
            cout<<"Bob "<<score<<endl;
        }else{
            cout<<"Alice "<<score+2*('a'-1-(str[0]<str[len-1]?str[0]:str[len-1]))<<endl;
        }
    }
    return 0;
}