class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v=arr;
        int n=arr.size();
        if(n<1)return {};
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        int r=1; int e=v[0];
        mp[e]=r;
        for(int i=1;i<n;i++){
            if(v[i]>e){
                r++;
                mp[v[i]]=r;
                e=v[i];
            }else{
                mp[v[i]]=r;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};