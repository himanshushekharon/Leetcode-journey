class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
            arr[i]=maxi;
        }
        arr[0]=-1;
        sort(arr.rbegin(),arr.rend());
        return arr;

    }
};