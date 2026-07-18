class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int x:nums){
            mn=min(mn,x);
            mx=max(mx,x);
        }
        return gcd(mn,mx);
    }
};