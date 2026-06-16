class Solution {
public:
    string processStr(string s) {
        string str="";
        for(char c:s){
            if(c>='a' && c<='z'){
                str.push_back(c);
            }else if(c=='*'){
                if(!str.empty())
                    str.pop_back();
            }else if(c=='#'){
                str+=str;
            }else if(c=='%'){
                reverse(str.begin(),str.end());
            }
        }
        return str;
    }
};