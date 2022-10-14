#include <iostream>
#include<map>
#include<string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		map<char,int> map;
		int n=a.length();
		int m=b.length();
		for(int i=0;i<m;i++){
			map[b[i]]++;
		}

        // for(auto it:map){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
		for(int i=0;i<n;i++){
			for(auto it:map){
				if(a[i]>it.first && it.second>0){
					map[it.first]--;
					a[i]=it.first;
                    char temp=a[i];
					
				}
			}
		}

        
    
		cout<<a<<endl;
	}
}