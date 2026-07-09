// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        int i=1;
        while(i<n){
            int m=i+(n-i)/2;
            if(isBadVersion(m)) {
                n=m;
            }else{
                i=m+1;
            }
            
        }
        return i;
    }
};