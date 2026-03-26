class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        int ans=sum;
        int j=0;
        for(int i=k;i<n;i++){
            sum=sum-nums[j]+nums[i];
            ans=max(ans,sum);
            j++;
        }
        return (ans+0.0)/k;
    }
};