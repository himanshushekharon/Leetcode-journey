class Solution {
public:
    double solve(double x, int n){
        if(n==0) return 1;
        double half=solve(x,n/2);
        if(n%2==0) return half*half;
        return x*half*half;
    }
    double myPow(double x, int n) {
        long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
        return solve(x,N);
    } 
};