class Solution {
public:
    int maxVowels(string s, int k) {
        string str="aeiou";
        int cnt=0;
        for(int i=0;i<k;i++){
            if(str.find(s[i])!=string::npos) cnt++;
        }
        int ans=cnt;
        for(int i=k;i<s.size();i++){
             if(str.find(s[i])!=string::npos)
             { cnt++;
             }
             if(str.find(s[i-k])!=string::npos){ cnt--;}
             ans=max(ans,cnt);
        }
        return ans;
    }
};