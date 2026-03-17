class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
       vector<int>vt;
       for(auto [a,b]:mp){
        vt.push_back(a);
       }
       sort(vt.begin(),vt.end(),[&](int a,int b){
        if(mp[a]==mp[b]){
            return a<b;
        }
        return mp[a]>mp[b];
       });
        vector<int>v;
        for(int i:vt){
            v.push_back(i);
            k--;
            if(k==0){
                break;
            }
        }
        return v;
    }
};