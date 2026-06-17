class Solution {
public:
    int maxDepth(string s) {
        int counter=0;
        int maxcounter=INT_MIN;
        for(char c:s){
            if(c=='('){
                counter++;
            }else if(c==')'){
                counter--;
            }
            maxcounter=max(counter,maxcounter);
        }
        return maxcounter;
    }
};