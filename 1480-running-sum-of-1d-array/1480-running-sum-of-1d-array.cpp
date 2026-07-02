class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int sum=nums[0];
        v.push_back(sum);
        for(int i=1;i<n;i++){
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;
    }
};