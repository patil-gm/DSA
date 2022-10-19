// the comparotor function given beloq is for the sorting vector<pair <int,string>>
// the compator function should always be static i.e. should not be involved in any class we have declare it globally


bool cmp (pair<int, string> a, pair<int, string> b) {
//   patil_gm
        if(a.first == b.first)
            return a.second > b.second;
        else
            return a.first < b.first;
    }

class Solution {
    
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> map;
        for(auto it:words){
                map[it]++;
        }
        vector<pair<int,string> > ans;
        for(auto it: map){
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end(),cmp);
        vector<string> op;
        int cnt=0;
        for(int i=ans.size()-1;i>=0;i--){
            cnt++;
            op.push_back(ans[i].second);
            if(cnt==k)break;
        }

        // reverse(op.begin(),op.end());
        return op;
    }
};




