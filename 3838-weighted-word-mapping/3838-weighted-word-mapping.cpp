class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string str="";
        for(string s :words){
            int sum=0;
            for(char c: s){
                sum+=weights[c-'a'];
            }
            int r=sum%26;
            str.push_back((char)('z'-r));
        }
        return str;
    }
};