class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string str="balloon";
        unordered_map<char,int>have;
        for(char c:text){
            have[c]++;
        }

        unordered_map<char,int>need;
        for(char c:str){
            need[c]++;
        }
        int ans=INT_MAX;
        for(auto [a,b]:need){
            int times=have[a]/b;
            ans=min(ans,times);
        }
        return ans;
    }
};