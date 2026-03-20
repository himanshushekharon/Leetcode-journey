class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=1, j=0, cnt=1;
        while(i<n){
            if(nums[i] != nums[j]){
                nums[++j]=nums[i];
                cnt++;
            }
            i++;
        }
        return cnt;
    }
};