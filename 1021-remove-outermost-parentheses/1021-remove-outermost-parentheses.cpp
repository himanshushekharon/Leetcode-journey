class Solution {
public:
    string removeOuterParentheses(string s) {
        int l=0;
        string str="";
        for(char ch:s){
            if(ch == '('){
                if(l>0) str+=ch;
                l++;
            }else if(ch == ')'){
                l--;
                if(l>0) str+=ch;
            }
        }
        return str;
    }
};