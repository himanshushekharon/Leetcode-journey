class Solution {
public:
 bool isfreq(int a[], int b[]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int  freq[26]={0};
        for( char c:s1){
            freq[c-'a']++;
        }
        int window[26]={0};
        int ws=s1.size();

        for(int i=0;i<s2.length();i++){
            window[s2[i]-'a']++;
            if(i>=ws) window[s2[i-ws]-'a']--;
            if(i>=ws-1 && isfreq(freq,window)){
                return true;
            }
        }
        return false;

    }
};