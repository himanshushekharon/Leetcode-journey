class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();

        for(int i=n-2;i>=0;i--){
            arr[i]=max(arr[i],arr[i+1]);
        }
        arr.push_back(-1);
        arr.erase(arr.begin());
        return arr;
    }
};