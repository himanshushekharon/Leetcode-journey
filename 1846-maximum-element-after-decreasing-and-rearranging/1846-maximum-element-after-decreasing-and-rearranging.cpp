class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1 && arr[i+1]>arr[i]){
                arr[i+1]=arr[i]+1;
            }
        }
        int ans=*max_element(arr.begin(), arr.end());
        return ans;
    }
};