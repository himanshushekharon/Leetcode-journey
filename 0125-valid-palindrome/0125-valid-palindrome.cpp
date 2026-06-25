class Solution {
public:
    bool isPalindrome(string str) {
        int l=0,h=str.length()-1;
        while(l<h){
            while(l<h && !isalnum(str[l])) l++;
            while(l<h && !isalnum(str[h])) h--;
            if(tolower(str[l])!=tolower(str[h])){
                return false;
            }
            l++;
            h--;
        }
        return true;
    }
};
