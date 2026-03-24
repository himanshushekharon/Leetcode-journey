class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(arr[i],maxi);
            arr[i]=maxi;
        }
        arr.erase(arr.begin());
        arr.push_back(-1);
        return arr;

    }
};