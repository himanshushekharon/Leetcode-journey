class Solution {
public:
    int numberOfSpecialChars(string word) {
        // set<int>s;
        // for(char i:word){
        //     s.insert(int(i));
        // }
        // vector<int>v;
        // for(int i:s){
        //     v.push_back(i);
        //     cout<< i<<" ";
        // }
        // int cnt=0;
        // for(int i=0;i<v.size();i++){
        //     for(int j=i;j<v.size();j++){
        //         if(abs(v[i]-v[j])==32) cnt++;
        //     }
        // }
        // return cnt;

        map<char,int>mp;
        for(char c:word){
            mp[c]++;
        }

        int cnt=0;
        for(char c='a'; c<='z';++c){
            if(mp[c]>=1 && mp[toupper(c)]>=1){
                cnt++;
            }
        }
        return cnt;
    }
};