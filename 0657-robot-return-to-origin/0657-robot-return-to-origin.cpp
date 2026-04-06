class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int r=0,l=0,u=0,d=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='U' ) {
                u++;
            }
            if( moves[i]=='D'){
                d++;
            }
            if(moves[i]=='R'){
                r++;
            }
            if(moves[i]=='L') l++;
        }

        if(r==l && u==d){
            return true;
        }
        return false;
    }

};