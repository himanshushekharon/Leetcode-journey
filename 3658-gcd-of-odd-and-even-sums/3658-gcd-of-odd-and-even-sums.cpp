class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumO=0,sumE=0;
        int i=1;
        int j=2;
        while(n--){
            sumO+=i;
            sumE+=j;
            i+=2;
            j+=2;
        }
        return gcd(sumO,sumE);
    }
};