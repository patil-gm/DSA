#include<iostream>
#include<vector>
using namespace std;

vector< vector<int> > getsubsets(vector<int> &arr){

    int n=arr.size();
    int sb_cnt=(1<<n); //2^n

    vector< vector<int> > ans;

    for(int i=0;i<sb_cnt;i++){
        vector<int> sb;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                sb.push_back(arr[j]);
            }
        }

        ans.push_back(sb);
    }

    return ans;     
}

int main(){

}


      