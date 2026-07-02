class Solution {
public:
    int vowelStrings(vector<string>& strs, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            string str=strs[i];
            int l=strs[i].length();
            if((str[0]=='a'||str[0]=='e'||str[0]== 'i'||str[0]== 'o'|| str[0]=='u') && (str[l-1]=='a'||str[l-1]=='e'||str[l-1]== 'i'||str[l-1]== 'o'|| str[l-1]=='u')) cnt++;
        }
        return cnt;
    }
};