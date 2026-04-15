class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int,int>mp;
        for(int i:deck){
            mp[i]++;
        }
        int mn=INT_MAX;
        int mx=INT_MIN;
        auto [x,y]=*mp.begin();
        int  g = y;
        for(auto &[a,b]: mp){
            cout << a << " "<<b <<endl;
            if(b==1) return false;
            g = gcd(g,b);
            mx=max(b,mx);
            mn=min(b,mn);
        }
        // int g=gcd(mn,mx);
        if(g==1){
            return false;
        }
        for(auto &[a,b]:mp){
            if(b%g!=0 )
            return false;
        }
        return true;
    }
};