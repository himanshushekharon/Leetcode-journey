class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto [a,b]:mp){
            if(b==1){
                return a;
            }
        }
        return -1;
    }
};