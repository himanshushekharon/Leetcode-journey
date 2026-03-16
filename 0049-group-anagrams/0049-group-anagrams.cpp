class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string st=s;
            sort(st.begin(),st.end());
            mp[st].push_back(s);
        }
        for(auto [a,b]:mp){
            result.push_back(b);
        }

        return result;
        
    }
};