class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int num=0;
        while(n!=0){
            int r=n%10;
            num=num*10+r;
            n/=10;
        }
        return abs(num-x);
    }
};