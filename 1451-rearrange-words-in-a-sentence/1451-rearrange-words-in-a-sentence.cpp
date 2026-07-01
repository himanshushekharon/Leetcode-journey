class Solution {
public:
    string arrangeWords(string text) {
        int n=text.size();
        for(char &c : text){
            c = tolower(c);
        }
        vector<string>ss;
        string str="";
        for(int i=0;i<n;i++){
            if(text[i]==' '){
                ss.push_back(str);
                str="";
            }else{
                str+=text[i];
            }
        }
        ss.push_back(str);
        stable_sort(ss.begin(),ss.end(),[](const string &a, const string &b){
            return a.length() < b.length();
        });
        string ans="";
        for(int i=0;i<ss.size();i++){
            ans+=ss[i];
            if(i<ss.size()-1) ans+=" ";
        }
        ans[0]=toupper(ans[0]);
        return ans;


    }
};