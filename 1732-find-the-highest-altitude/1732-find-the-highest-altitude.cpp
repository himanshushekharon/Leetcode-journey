class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>arr(n+1);
        int j=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            if(j<n+1){
                arr[j]=sum;
                j++;
            }
        }
        int ans=INT_MIN;
        for(int a: arr){
            ans=max(a,ans);
        }
        return ans;
    }
};