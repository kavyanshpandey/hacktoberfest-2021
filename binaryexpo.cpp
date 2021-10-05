#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;

//Binary exponentiation (Power in log N)
int binaryexpo(int a,int b){
        int result= 1;
        while(b){
            if(b%2) result =(result*a + MOD)%MOD;
            a=((a)*(a))%MOD;
            b/=2;
        }
        return result;
}
int main(){
    

    cout<<binaryexpo(2,1000);
    
}