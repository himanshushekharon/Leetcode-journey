class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]==k){
                return true;
            }
            if(nums[l]==nums[m] && nums[h]==nums[m]) {
                l++;
                h--;
            }else if(nums[l]<=nums[m]) {
                if(nums[l]<=k && k<nums[m]) {
                    h=m-1;
                } else{
                    l=m+1;
                }
            }else {
                if(nums[h]>=k && k>nums[m]) {
                    l=m+1;
                } else{
                    h=m-1;
                }
            }
        }
        return false;
    }
};