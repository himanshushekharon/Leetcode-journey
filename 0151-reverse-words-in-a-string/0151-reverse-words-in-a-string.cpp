class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>str;
        while(ss >> word){
            str.push_back(word);
        }
        int n=str.size();
        reverse(str.begin(),str.end());
        string res="";
        for(int i=0;i<n-1;i++){
            res+=str[i];
            res+=" ";
        }
        res+=str[n-1];
        return res;
    }
};