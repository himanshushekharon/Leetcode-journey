class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str;
        int j=0;
        for(int i=0;i<n;i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') || s[i]>='A' && s[i]<='Z'){
                str.push_back(tolower(s[i]));
                j++;
            }
        }
        int st=0,en=str.length()-1;
        while(st<=en){
            if(str[st]!=str[en])
                return 0;
            st++;
            en--;
        }
        return 1;
    }
};
