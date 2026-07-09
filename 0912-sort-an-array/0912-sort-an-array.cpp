class Solution {
public:
    void mergesort(vector<int>& nums, int l, int r) {
        if (l >= r) return;

        int mid = l + (r - l) / 2;
        mergesort(nums, l, mid);
        mergesort(nums, mid + 1, r);

        merge(nums, l, mid, r);
    }

    void merge(vector<int>& nums, int l, int mid, int r) {
        vector<int> temp(r - l + 1);
        int i = l;       // Corrected: should start at l
        int j = mid + 1;
        int k = 0;

        while (i <= mid && j <= r) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        
        while (i <= mid) temp[k++] = nums[i++];
        while (j <= r) temp[k++] = nums[j++];
        
        // Copy back to the original array
        for (int p = 0; p < temp.size(); p++) {
            nums[l + p] = temp[p];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};