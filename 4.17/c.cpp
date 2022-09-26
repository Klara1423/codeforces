#include<iostream>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,x[200005];
        long long sum=0,a=0,b=0; 
        cin>>n>>a>>b;//a迁都 b攻城
        for(int i=1;i<=n;i++){
            cin>>x[i];
        }
        x[0]=0;
        //以上为输入
        /*if()条件 迁都<攻城 ,都城在xi
(x(i+1)-xi)*a + (x(i+2)+...+xn)*b-(n-i-1)*x(i+1)*b  <  (x(i+1)+...+xn)*b-(n-i)*xi*b
                    (x(i+1)-xi)*a-(n-i-1)*x(i+1)*b  <  x(i+1)*b-(n-i)*xi*b
                    (x(i+1)-xi)*a-(n-i-1)*x(i+1)*b  <  -(n-i-1)*xi*b
                                     (x(i+1)-xi)*a  <  (n-i-1)*x(i+1)*b-(n-i-1)*xi*b
                                     (x(i+1)-xi)*a  <  (n-i-1)*(x(i+1)-xi)*b
                                                 a  <  (n-i-1)*b
        */
         for(int i=0;i<n;i++){//先攻
            sum+=(x[i+1]-x[0])*b;
            if(a<(n-i-1)*b){//迁都
                sum+=(x[i+1]-x[0])*a;
                x[0]=x[i+1];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}