class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> vec1(n),vec2(n);
        vec1[0]=0;
        vec2[n-1]=0;
        for(int i=1;i<n;i++){
            vec1[i]=vec1[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            vec2[i]=vec2[i+1]+nums[i+1];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=abs(vec1[i]-vec2[i]);
        }
        return ans;
    }
};