class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int>vt;
        for(auto [a,b]:mp){
            vt.push_back(a);
        }
        sort(vt.begin(),vt.end(),[&](int a, int b){
            if(mp[a]==mp[b]){
            return a<b;
        }
        return mp[a]>mp[b];
        });
        for(int i:vt){
            if(i%2==0){
                return i;
            }
            
        }
        return -1;

        
    }
};