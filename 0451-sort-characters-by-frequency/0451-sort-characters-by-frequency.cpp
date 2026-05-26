class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>>sv(mp.begin(),mp.end());

        sort(sv.begin(),sv.end(),[](const auto& a, const auto& b){
            return a.second > b.second;
        });

        string result="";
        for(auto [a,b]:sv){
            result+=string(b,a);
        }
        return result;
    }
};