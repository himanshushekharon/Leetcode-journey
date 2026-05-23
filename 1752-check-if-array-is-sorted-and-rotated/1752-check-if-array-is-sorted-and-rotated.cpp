class Solution {
public:
    bool check(vector<int>& nums) {
        ///////////////////// O(n^2) apporach
        
        // vector<int>v=nums;
        // sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     if(v==nums){
        //         return true;
        //     }
        //     rotate(v.begin(), v.begin()+1, v.end());
            
        // }
        // return false;
        
        ///////////////////////////////////////////// O(n) apporach
        int count=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
            if(count>1) return false;
        }
        return true;
        
    }
};