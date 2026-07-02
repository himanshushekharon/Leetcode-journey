class Solution {
public:
    int vowelStrings(vector<string>& strs, int left, int right) {
        int cnt=0;
        string v = "aeiou";
        for(int i=left;i<=right;i++){
            string str=strs[i];
            int l=strs[i].length();
            if( (v.find(str[0])!= string::npos)  && (v.find(str[l-1])!= string::npos) ) cnt++;
        }              //if (str.find(...) != string::npos), you are explicitly asking: "Is the result different from 'not found'?"
        return cnt;
    }
};