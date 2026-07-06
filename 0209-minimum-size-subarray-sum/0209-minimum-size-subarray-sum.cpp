class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mnl=INT_MAX;
        int currsum=0;
        int l=0;
        for(int r=0;r<n;r++){
            currsum+=nums[r];
            while(currsum>=target){
                mnl=min(mnl,r-l+1);
                currsum-=nums[l];
                l++;
            }
        }
        return (mnl==INT_MAX)?0:mnl;
    }
};