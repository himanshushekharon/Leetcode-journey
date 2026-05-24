class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i:nums1){
            mp[i]++;
        }
        vector<int>v;
        for(int i:nums2){
            if(mp[i]>0){
                v.push_back(i);
            }
        }
        if(v.size()>0){
            return v[0];
        }
        return -1;
    }
};