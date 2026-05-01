class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int total=0;
        for(int i=0;i<n;i++){
            sum+=i*nums[i];
            total+=nums[i];
        }
        int ans=sum;
        for(int i=n-1;i>=0;i--){
            sum=sum-nums[i]*(n-1)+total-nums[i];
            ans = max(ans, sum);
        }
        return ans;
    }
};