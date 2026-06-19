class Solution {
public:
    int sumofdigit(int n){
        int sum=0;
        while(n!=0){
            int r=n%10;
            sum+=r;
            n/=10;
        }
        return sum;
    } 
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int n:nums){
            ans=min(ans,sumofdigit(n));
        }
        return ans;
    }
};