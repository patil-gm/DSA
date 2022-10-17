/*
time complexity : n*log(log(n))
 
 kaise aya = n/2 + n/3 + n/5 + n/7 + n/11 +...... times loop run 
           = n * (1/2 + 1/3 + 1/5 + 1/7 + 1/11 + ....)
           = n * (this is a H.P. of prime no => log(log n) => this is calculated using tylor seris)
           
segmented sieve : basically it is also a sieve of erosthesis but in limited range provided 
                  e.g. return the prime no wich are smaller than 15 => 2,3,5,7,11
*/

#include<iostream>
#include<vector>
using namespace std;

//using Sieve
void sieve(bool prime[]) {

    //setting TRUE for every number
    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }

    for(int i = 2; i<=1000000; i++) {

        if(prime[i]){
            //iske saare multiple mark krde - non prime
            for(int j = 2*i; j<=1000000; j+=i){
                prime[j] = 0;   
            }
        }
    }
    prime[0] = prime[1] = 0;
}

int main() {

    bool prime[1000001];
    sieve(prime);

    int n;
    cin >> n;
  
        if(prime[n]) {
            cout << "It is a Prime Number" << endl;
        }
        else{
            cout << " It is not a Prime Number" << endl;
        }


    return 0;
}
