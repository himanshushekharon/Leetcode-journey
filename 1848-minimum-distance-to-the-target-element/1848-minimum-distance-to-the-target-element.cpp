class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        bool ch=true;
        int result=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                result=min(abs(i-start),result);
                ch=false;
            }
        }
        if(ch)
            return -1;
        return result;
        
    }
};