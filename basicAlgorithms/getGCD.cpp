//patil_gm 🚀🔥


int getgcd(int a,int b){
    
    if(a==0)return b;
    if(b==0)return a;

    while(a!=b){
        if(a>b)a-=b;
        else b-=a;
    }

    return a;
}

