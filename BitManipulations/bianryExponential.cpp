#include<iostream>
using namespace std;
const int mod = 1e9+7;


// the following code calling same function calls two times 
int powerREC(int base,int pow){
    if(pow==0)return 1;
    if(pow&1) return (base*((( powerREC(base,pow/2)%mod) * (powerREC(base,pow/2)%mod))%mod))%mod;
    else return (( powerREC(base,pow/2)%mod) * (powerREC(base,pow/2)%mod))%mod;
}

// we will store the result to avoid that extra recursion call
int OPpowerREC(int base,int pow){
    if(pow==0)return 1;

    int res =OPpowerREC(base,pow/2)%mod;
    if(pow&1) return (base*((res* res)%mod))%mod;
    else return (res*res)%mod;
}

int powerIT(int base,int pow){
    int ans=1;
    while(pow){
        if(pow&1){ans=(ans*base)%mod;}
        base=(base*base)%mod;
        pow=pow>>1;
    }
    return ans%mod;
}

int main(){
    cout<<OPpowerREC(10,200)<<endl;
    cout<<powerIT(10,200)<<endl;
}