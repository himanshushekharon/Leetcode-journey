class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>v;
        int maxi=nums[0];
        for(int x:nums){
            maxi=max(maxi,x);
            v.push_back(gcd(x,maxi));
        }
        sort(v.begin(),v.end());
        
        if(v.size()%2==0){
            long long ans=0;
            int i=0,j=v.size()-1;
            while(i<j){
                ans+=gcd(v[i],v[j]);
                i++;j--;
            }
            return ans;
        }
        long long ans=0;
        int i=0,j=v.size()-1;
        while(i<j){
            ans+=gcd(v[i],v[j]);
            i++;j--;
        }
        return ans;
    }
};