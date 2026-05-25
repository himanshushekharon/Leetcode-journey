class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1) return 1;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int ans=0;
        bool odd=false;
        for(auto [a,b]:mp){
            if(b%2==0){
                ans+=b;
            }else{
                ans+=b-1;
                odd=true;
            }
        }
        if(odd) ans++;
        return ans;
    }
};