class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
       vector<int>unique;
       for(auto [a,b]:mp){
        unique.push_back(a);
       }
       sort(unique.begin(),unique.end(),[&](int a,int b){
        if(mp[a]==mp[b]){
            return a<b;
        }
        return mp[a]>mp[b];
       });
        vector<int>v;
        for(int i:unique){
            v.push_back(i);
            k--;
            if(k==0){
                break;
            }
        }
        return v;
    }
};