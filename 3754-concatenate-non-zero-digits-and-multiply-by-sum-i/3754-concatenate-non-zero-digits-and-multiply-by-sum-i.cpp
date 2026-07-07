class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        string str=to_string(n);
        for(char c:str){
            if(c!='0'){
                ans=ans*10+(c-'0');
            }
        }
        long long x=ans;
        long long sum=0;
        while(x!=0){
            int r=x%10;
            sum+=r;
            x/=10;
        }
        ans=ans*sum;
        return ans;
    }
};