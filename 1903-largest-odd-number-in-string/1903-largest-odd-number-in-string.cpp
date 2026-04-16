class Solution {
public:
    string largestOddNumber(string num) {
        vector<char>s;
        
        for(char c:num){
            s.push_back(c);
        }
        string str="";
        int j=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            int a=s[i]-'0';
            if(a%2!=0){
                str+=s[i];
                j=i;
                break;
            }
        }
        for(int k=j-1;k>=0;k--){
            str+=s[k];
        }
        reverse(str.begin(),str.end());
        return str;

    }
};