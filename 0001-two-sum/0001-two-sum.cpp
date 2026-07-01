class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int x=target-nums[i];
            if(mp.count(x)){
                return {mp[x],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};