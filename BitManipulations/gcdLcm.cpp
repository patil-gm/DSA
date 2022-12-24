// (a*b)/gcd = lcm

// euclid algo (long division algo )

int gcd (int a,int b){
    if(a%b ==0)return b;
    return gcd(b,a%b);
}
/*      OR      */
int gcd (int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
// both are same
